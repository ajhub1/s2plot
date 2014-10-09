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
 * s2Vertex.cpp
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"
#include <cmath>

using namespace omega;
using namespace glm;	
using namespace std;

s2Vertex::s2Vertex()
{
	// empty constructor invoked when creating the arrays in the module
}

s2Vertex::s2Vertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{	
	// when constructing as a vertex, triangle increments offsetptr
	initialise(x, y, z, w);
}

s2Vertex::s2Vertex(GLuint* offsetptr, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{	
	initialise(x, y, z, w);
	// this instance is a s2Primitive and is responsible for incrememnting offsetptr
	*offsetptr = *offsetptr + 1;
	offset = *offsetptr;	
}

/**
s2Vertex::s2Vertex(const s2Vertex& that) :
	position(that.position), colour(that.colour), normal(that.normal)
{
	// TODO allocated memory copy must research
}

 
s2Vertex& s2Vertex::operator=(const s2Vertex& that)
{
	// TODO allocated memory copy must research
	if (this != &that)
	{
		position = that.position;
		colour = that.colour;
		normal = that.normal;
	}
	return *this;
}
*/
s2Vertex::~s2Vertex()
{
	delete position;
	delete colour;
	delete normal;
	delete indices;
	delete vertices;
	delete vertexData;
	delete primitives;
}
void s2Vertex::initialise(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	position = new vec4(x,y,z,w);
	colour = new vec4(0.5f,0.5f,0.5f,1.0f);
	normal = new vec4(1.0f,1.0f,1.0f,1.0f); // TODO think about normal default

	primitives = new vector<s2Primitive*>();
	primitives->push_back(this);

	vertices = new vector<s2Vertex*>();
	vertices->push_back(this);
	
	vertexData = new vector<GLfloat>();
	// the order of push_backs is extremely important to the OpenGL calls
	vertexData->push_back(position->x);
	vertexData->push_back(position->y);
	vertexData->push_back(position->z);
	vertexData->push_back(position->w);
	vertexData->push_back(colour->r);
	vertexData->push_back(colour->g);
	vertexData->push_back(colour->b);
	vertexData->push_back(colour->a);
	vertexData->push_back(normal->x);
	vertexData->push_back(normal->y);
	vertexData->push_back(normal->z);
	vertexData->push_back(normal->w);
	
	indices = new vector<GLuint>();
	indices->push_back(offset);
}

vector<s2Primitive*>* s2Vertex::getPrimitives()
{
	return primitives;
}

vector<s2Vertex*>* s2Vertex::getVertices()
{
	return vertices;
}

vector<GLfloat>* s2Vertex::getVertexData()
{	
	return vertexData;
}

vector<GLuint>* s2Vertex::getIndices()
{
	return indices;
}

void s2Vertex::draw()
{
	// TODO last argument could be NULL, or indices check it later
	glDrawRangeElements(GL_POINT, offset, offset, 1, GL_UNSIGNED_INT, 0);
}

GLfloat s2Vertex::getDistance(Vector3f cameraPosition)
{
	return pow(cameraPosition.x() - position->x, 2.0f) +
		   pow(cameraPosition.y() - position->y, 2.0f) +
		   pow(cameraPosition.z() - position->z, 2.0f); 
}
	
// setters
void s2Vertex::setPosition(vec4* position)
{
	this->position = position;
}
	
void s2Vertex::setColour(vec4* colour)
{
	this->colour = colour;
}

void s2Vertex::setNormal(vec4* normal)
{
	this->colour = normal;
}

// getters
vec4* s2Vertex::getPosition()
{
	return position;
}

vec4* s2Vertex::getColour()
{
	return colour;
}

vec4* s2Vertex::getNormal()
{
	return normal;
}

