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
using namespace glm;

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
	

	
	printf("\ncreated a sphere\n");
}


int s2plotFactory::s2cube(float size, vec4 position)
{
	printf("\n s2cube\n");
	s2plotTriangle* facets[12];
	
	//vertices
	vec4 p0(0.0f,0.0f,0.0f,0.0f);
	vec4 p1(0.0f,1.0f,0.0f,0.0f);
	vec4 p2(1.0f,0.0f,0.0f,0.0f);
	vec4 p3(1.0f,1.0f,0.0f,0.0f);
	
	vec4 p4(0.0f,0.0f,1.0f,0.0f);
	vec4 p5(0.0f,1.0f,1.0f,0.0f);
	vec4 p6(1.0f,0.0f,1.0f,0.0f);
	vec4 p7(1.0f,1.0f,1.0f,0.0f);

	//front face
	facets[0] = new s2plotTriangle(p0,p1,p2);
	facets[1] = new s2plotTriangle(p1,p2,p3);
	
	//right face
	facets[2] = new s2plotTriangle(p2,p5,p3);
	facets[3] = new s2plotTriangle(p3,p5,p7);
	
	//back face
	facets[4] = new s2plotTriangle(p5,p4,p7);
	facets[5] = new s2plotTriangle(p7,p4,p6);
	
	//left face
	facets[6] = new s2plotTriangle(p4,p0,p6);
	facets[7] = new s2plotTriangle(p6,p0,p1);
	
	//top face
	facets[8] = new s2plotTriangle(p1,p6,p7);
	facets[9] = new s2plotTriangle(p1,p3,p7);
	
	//bottom face
	facets[10] = new s2plotTriangle(p0,p4,p5);
	facets[11] = new s2plotTriangle(p5,p0,p2);
	
}
