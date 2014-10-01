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
 * s2Triangle.cpp
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"
#include <omegaGl.h>

using namespace s2plot;
using namespace omega;
using namespace std;
using namespace glm;

s2Triangle::s2Triangle(GLuint* offsetptr, 
						s2Vertex* p0, 
						s2Vertex* p1, 
						s2Vertex* p2,
						vec3 vertexIndices)
{
	initialise(p0, p1, p2, vertexIndices);
	
	*offsetptr = *offsetptr + NUMBER_OF_VERTICES_PER_TRIANGLE;
	offset = *offsetptr;	
}

/*
s2Triangle::s2Triangle(const s2Triangle& that)
{	
	// TODO allocated memory copy must research
	// TODO incomplete
	offset = that.offset;
}

s2Triangle& s2Triangle::operator=(const s2Triangle& that)
{
	// TODO allocated memory copy must research
	if (this != &that)
	{
		// TODO incomplete
		offset = that.offset;
	}
	
	return *this;
}
*/

s2Triangle::~s2Triangle()
{
	delete indices;
	delete vertices;
	delete vertexData;
	delete primitives;
}

void s2Triangle::initialise(s2Vertex* p0, 
							s2Vertex* p1, 
							s2Vertex* p2,
							vec3 vertexIndices)
{
	primitives = new vector<s2Primitive*>();
	primitives->push_back(this);
	
	vertices = new vector<s2Vertex*>();
	vertices->push_back(p0);
	vertices->push_back(p1);
	vertices->push_back(p2);
	
	indices = new vector<GLuint>();
	indices->push_back(vertexIndices[0]);
	indices->push_back(vertexIndices[1]);
	indices->push_back(vertexIndices[2]);
	 
	// add the data of NUMBER_OF_VERTICES_PER_TRIANGLE vertices
	vertexData = new vector<GLfloat>();
	int i;
	for (i = 0; i < vertices->size(); i++)
	{
		vector<GLfloat>* tempVertexData = vertices->at(i)->getVertexData();
		
		int j = 0;
		while(j < tempVertexData->size())
		{
			vertexData->push_back(tempVertexData->at(j));
			j++;
		}
	}
}

vector<s2Primitive*>* s2Triangle::getPrimitives()
{
	return primitives; 
}

vector<s2Vertex*>* s2Triangle::getVertices()
{
	return vertices;
}

vector<GLuint>* s2Triangle::getIndices()
{
	return indices;
}		

void s2Triangle::draw()
{
	//TODO recheck
	glDrawRangeElements(GL_TRIANGLES, offset, offset + 2, 3, GL_UNSIGNED_INT, 0);
}

GLfloat s2Triangle::getDistance(Vector3f cameraPosition)
{
	float sum = 0.0f;
	for (int i = 0; i < vertices->size(); i++)
	{
		sum += vertices->at(i)->getDistance(cameraPosition);
	}
	return sum / NUMBER_OF_VERTICES_PER_TRIANGLE;
}

