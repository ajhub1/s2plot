/*******************************************************************************
 * Copyright 2006-2012 David G. Barnes, Paul Bourke, Christopher Fluke
 *
 * This file is part of S2PLOT.
 *
 * S2PLOT is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S2PLOT is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S2PLOT.  If not, see <http://www.gnu.org/licenses/>. 
 *
 * We would appreciate it if research outcomes using S2PLOT would
 * provide the following acknowledgement:
 *
 * "Three-dimensional visualisation was conducted with the S2PLOT
 * progamming library"
 *
 * and a reference to
 *
 * D.G.Barnes, C.J.Fluke, P.D.Bourke & O.T.Parry, 2006, Publications
 * of the Astronomical Society of Australia, 23(2), 82-93.
 *
 * s2Program.cpp
 * 
 ******************************************************************************/
//TODO REFERENCE code copied from www.arcsynthesis.org

#include "s2plot/s2plot.h"

using namespace omega;
using namespace s2plot;
using namespace std;

s2Program::s2Program()
{
	ifstream vertShaderStream("vertexShader.vert");
	vertShaderStream.seekg(0, ios::end);   
	strVertexShader.reserve(vertShaderStream.tellg());
	vertShaderStream.seekg(0, ios::beg);
	
	strVertexShader.assign((istreambuf_iterator<char>(vertShaderStream)),
							istreambuf_iterator<char>());
				
	ifstream fragShaderStream("fragmentShader.frag");
	fragShaderStream.seekg(0, ios::end);   
	strFragmentShader.reserve(fragShaderStream.tellg());
	fragShaderStream.seekg(0, ios::beg);
	
	strFragmentShader.assign((istreambuf_iterator<char>(fragShaderStream)),
							istreambuf_iterator<char>());   
				
	s2ProgramInit(strVertexShader, strFragmentShader);
}


GLuint s2Program::getShaderProgramRef()
{
	return shaderProgramRef;
}

void s2Program::s2ProgramInit(string strVertexShader, string strFragmentShader)
{
	shaderList.push_back(CreateShader(GL_VERTEX_SHADER, strVertexShader));
	shaderList.push_back(CreateShader(GL_FRAGMENT_SHADER, strFragmentShader));
	
	shaderProgramRef = s2Program::CreateProgram(shaderList);

	for_each(shaderList.begin(), shaderList.end(), glDeleteShader);
}

GLuint s2Program::CreateShader(GLenum eShaderType, const string &strShaderFile)
{
	GLuint shader = glCreateShader(eShaderType);
	const char *strFileData = strShaderFile.c_str();
	glShaderSource(shader, 1, &strFileData, NULL);
	
	glCompileShader(shader);
	
	GLint status;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
	if (status == GL_FALSE)
	{
		GLint infoLogLength;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLogLength);
		
		GLchar *strInfoLog = new GLchar[infoLogLength + 1];
		glGetShaderInfoLog(shader, infoLogLength, NULL, strInfoLog);
		
		const char *strShaderType = NULL;
		switch(eShaderType)
		{
			case GL_VERTEX_SHADER: strShaderType = "vertex"; break;
			case GL_GEOMETRY_SHADER: strShaderType = "geometry"; break;
			case GL_FRAGMENT_SHADER: strShaderType = "fragment"; break;
		}
		
		fprintf(stderr, "Compile failure in %s shader:\n%s\n", strShaderType, strInfoLog);
		delete[] strInfoLog;
	}

	return shader;
}

GLuint s2Program::CreateProgram(const vector<GLuint> &shaderList)
{
	GLuint program = glCreateProgram();
	
	for(size_t iLoop = 0; iLoop < shaderList.size(); iLoop++)
		glAttachShader(program, shaderList[iLoop]);
	
	glLinkProgram(program);
	
	GLint status;
	glGetProgramiv (program, GL_LINK_STATUS, &status);
	if (status == GL_FALSE)
	{
		GLint infoLogLength;
		glGetProgramiv(program, GL_INFO_LOG_LENGTH, &infoLogLength);
		
		GLchar *strInfoLog = new GLchar[infoLogLength + 1];
		glGetProgramInfoLog(program, infoLogLength, NULL, strInfoLog);
		fprintf(stderr, "Linker failure: %s\n", strInfoLog);
		delete[] strInfoLog;
	}
	
	for(size_t iLoop = 0; iLoop < shaderList.size(); iLoop++)
		glDetachShader(program, shaderList[iLoop]);
	return program;
}

	

