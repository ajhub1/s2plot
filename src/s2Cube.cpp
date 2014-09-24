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
 * s2Cube.cpp
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;
using namespace glm;
using namespace std;

s2Cube::s2Cube(GLuint* offsetptr, GLfloat size, vec4 position)
{	
	initialise(offsetptr);
}


s2Cube::s2Cube(const s2Cube& that)
{
	//TODO incomplete
	this->initialise(that.offsetptr);
}

s2Cube& s2Cube::operator=(const s2Cube& that)
{
	if (this != &that)
	{
		//TODO incomplete
		this->initialise(that.offsetptr);
	}
	return *this;
}


s2Cube::~s2Cube()
{
	delete indices;
	delete primitives;
}
	
void s2Cube::initialise(GLuint* offsetptr)
{
	primitives = new vector<s2Primitive*>();
	indices = new vector<GLuint>();

	
	GLuint temp[] = {0,1,2, 1,2,3, 2,5,3, 3,5,7, 5,4,7, 7,4,6, 
		4,0,6, 6,0,1, 1,6,7, 1,3,7, 0,4,5, 5,0,2};
	indices->assign(temp, temp + NUMBER_OF_INDICES);	//convert array into a vector


	//vertices
	vertices[0] = new s2Vertex(0.0f, 0.0f, 0.0f, 0.0f);
	vertices[1] = new s2Vertex(0.0f, 1.0f, 0.0f, 0.0f);
	vertices[2] = new s2Vertex(1.0f, 0.0f, 0.0f, 0.0f);
	vertices[3] = new s2Vertex(1.0f, 1.0f, 0.0f, 0.0f);
	vertices[4] = new s2Vertex(0.0f, 0.0f, 1.0f, 0.0f);
	vertices[5] = new s2Vertex(0.0f, 1.0f, 1.0f, 0.0f);
	vertices[6] = new s2Vertex(1.0f, 0.0f, 1.0f, 0.0f);
	vertices[7] = new s2Vertex(1.0f, 1.0f, 1.0f, 0.0f);
	
	//indices
	triple t1 = triple(0, 1, 2);
	triple t2 = triple(1, 2, 3);
	triple t3 = triple(2, 5, 3);
	triple t4 = triple(3, 5, 7);
	triple t5 = triple(5, 4, 7);
	triple t6 = triple(7, 4, 6);
	triple t7 = triple(4, 0, 6);
	triple t8 = triple(6, 0, 1);
	triple t9 = triple(1, 6, 7);
	triple t10 = triple(1, 3, 7);
	triple t11 = triple(0, 4, 5);
	triple t12 = triple(5, 0, 2);
	
	
	//front face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[0], vertices[1], vertices[2], t1));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[1], vertices[2], vertices[3], t2));
	
	//right face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[2], vertices[5], vertices[3], t3));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[3], vertices[5], vertices[7], t4));
	
	//back face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[5], vertices[4], vertices[7], t5));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[7], vertices[4], vertices[6], t6));
	
	//left face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[4], vertices[0], vertices[6], t7));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[6], vertices[0], vertices[1], t8));
	
	//top face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[1], vertices[6], vertices[7], t9));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[1], vertices[3], vertices[7], t10));
	
	//bottom face
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[0], vertices[4], vertices[5], t11));
	primitives->push_back(new s2Triangle(offsetptr, 
						vertices[5], vertices[0], vertices[2], t12));
	
}

vector<s2Primitive*>* s2Cube::getPrimitives()
{
	return primitives;
}

void s2Cube::updateFacetOffsets(GLuint baseOffset)
{
	// TODO shifaz is a bitch, andreas is THE ass
}
