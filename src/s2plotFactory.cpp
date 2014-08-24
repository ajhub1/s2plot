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
 * s2plotModule
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

s2plotFactory::s2plotFactory(s2plotModule* mod)
{
	s2plotModule* module = mod;
	//printf("\n factory created\n");
}

s2plotFactory::~s2plotFactory()
{

}

int s2plotFactory::createProgram()
{
	printf("\nprog\n");
}



int s2plotFactory::ns2sphere()
{
	printf("\ns2sphere\n");
	
	//s2plotProgram* s2prog;
	//s2prog->s2plotProgramInit("vertexShader.vert","fragmentShader.frag"); 
	
	
	
//float[] sampleTriangle {			//remember specify coordinates anti clockwise ->normal openGL convention
	//1.0f, 0.0f, 0.0f, 1.0f,
	//1.0f, 0.0f, 0.0f, 0.0f,
	//0.0f, 0.0f, 0.0f, 0.0f,
	
	//0.0f, 1.0f, 0.0f, 1.0f,
	//0.0f, 1.0f, 0.0f, 0.0f,
	//0.0f, 0.0f, 0.0f, 0.0f,
	
	//-1.0f, 0.0f, 0.0f, 1.0f,
	//0.0f, 0.0f, 1.0f, 0.0f,
	//0.0f, 0.0f, 0.0f, 0.0f,
//}
	
//glEnableVertexAttrib(vaIndices::VA_POSITION_INDEX);
//glEnableVertexAttrib(vaIndices::VA_COLOR_INDEX);
//glEnableVertexAttrib(vaIndices::VA_NORMAL_INDEX);

//glVertexAttributePointer(vaIndices::VA_POSITION_INDEX, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes, 0, 0);
//glVertexAttributePointer(vaIndices::VA_COLOR_INDEX, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes * 2, sizeOfVector4InBytes * 1);
//glVertexAttributePointer(vaIndices::VA_NORMAL_INDEX, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes * 2, sizeOfVector4InBytes * 2);


	
	
//GLuint sampleVBO;	//remember unsigne int here

//glGenBuffers(1, &sampleVBO);		//1 = number of vbos to make

//glBindBuffer(GL_ARRAY_BUFFER, sampleVBO);

//glBufferData(GL_ARRAY_BUFFER, sizeof(sampleTriangle), sampleTriangle, GL_STATIC_DRAW);
	
	
	
//glUseProgram(s2prog->thisProgram);
	
	
	//GLuint vao;
//glGenVertexArrays(1, &vao);
//glBindVertexArray(vao);
	
	//glDrawArrays(GL_TRIANGLES, 0, 3);
	
	printf("\ncreated a sphere\n");
}
