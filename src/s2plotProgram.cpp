//temp -> TODO code copied from www.arcsynthesis.org
#include <omega.h>
#include <omegaGl.h>
#include <string>
#include <fstream>
#include <streambuf>


#include "s2plot/s2plot.h"
using namespace omega;
using namespace s2plot;

s2plotProgram::s2plotProgram()
{
	std::ifstream t("vertexShader.vert");
	

	t.seekg(0, std::ios::end);   
	strvs.reserve(t.tellg());
	t.seekg(0, std::ios::beg);

	strvs.assign((std::istreambuf_iterator<char>(t)),
				std::istreambuf_iterator<char>());
				
	std::ifstream tt("fragmentShader.frag");
	
	tt.seekg(0, std::ios::end);   
	strfs.reserve(tt.tellg());
	tt.seekg(0, std::ios::beg);

	strfs.assign((std::istreambuf_iterator<char>(tt)),
				std::istreambuf_iterator<char>());   
				
	s2plotProgramInit(strvs, strfs);
}


void s2plotProgram::s2plotProgramInit(std::string strVertexShader, std::string strFragmentShader) //use init list?? TODO
{
	//printf("\ns2plotProgramInit enter\n");
	shaderList.push_back(CreateShader(GL_VERTEX_SHADER, strVertexShader));
	shaderList.push_back(CreateShader(GL_FRAGMENT_SHADER, strFragmentShader));
	
	theProgram = s2plotProgram::CreateProgram(shaderList);

	std::for_each(shaderList.begin(), shaderList.end(), glDeleteShader);
	//printf("\ns2plotProgramInit exit %d \n", theProgram );
}

GLuint s2plotProgram::CreateShader(GLenum eShaderType, const std::string &strShaderFile)
{
	
	GLuint shader = glCreateShader(eShaderType);
	const char *strFileData = strShaderFile.c_str();
	//printf("\nCreateShader enter %p \n", &strShaderFile);
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

	//printf("\nCreateShader exit\n");
	return shader;
}

GLuint s2plotProgram::CreateProgram(const std::vector<GLuint> &shaderList)
{
	//printf("\nCreateProgram enter\n");
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
	//printf("\nCreateProgram exit\n");
	return program;
}

	

