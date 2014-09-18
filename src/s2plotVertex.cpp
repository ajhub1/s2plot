#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

using namespace omega;
using namespace glm;	

s2plotVertex::s2plotVertex()
{
	// empty constructor invoced when creating the arrays in the module
}

// when constructing as a vertex, triangle increments offsetptr
s2plotVertex::s2plotVertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{	
	position = new vec4(x,y,z,w);
	colour = new vec4(1.0f,1.0f,1.0f,1.0f);
	normal = new vec4(1.0f,1.0f,1.0f,1.0f); // TODO think about normal default
}

// when constructing as a facet, respnsible for incrementing offsetptr
s2plotVertex::s2plotVertex(GLuint* offsetptr, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{	
	position = new vec4(x,y,z,w);
	colour = new vec4(1.0f,1.0f,1.0f,1.0f);
	normal = new vec4(1.0f,1.0f,1.0f,1.0f); // TODO think about normal default
	*offsetptr = *offsetptr + 1;
	offset = *offsetptr;
}

s2plotVertex::s2plotVertex(const s2plotVertex& that) :
	position(that.position), colour(that.colour), normal(that.normal)
{
}

s2plotVertex::~s2plotVertex()
{
	delete position;
	delete colour;
	delete normal;
}

s2plotVertex& s2plotVertex::operator=(const s2plotVertex& that)
{
	if (this != &that)
	{
		position = that.position;
		colour = that.colour;
		normal = that.normal;
	}
	return *this;
}
	
void s2plotVertex::setPosition(vec4* position)
{
	this->position = position;
}
	
void s2plotVertex::setColour(vec4* colour)
{
	this->colour = colour;
}

void s2plotVertex::setNormal(vec4* normal)
{
	this->colour = normal;
}

vec4* s2plotVertex::getPosition()
{
	return position;
}

vec4* s2plotVertex::getColour()
{
	return colour;
}

vec4* s2plotVertex::getNormal()
{
	return normal;
}

template <typename s2Type> s2plotVertex** s2plotVertex::getFacets()
{
	vertices[0] = this;
	return vertices;
}

GLfloat* s2plotVertex::getVertices()
{
	vertexData[0] = position->x;
	vertexData[1] = position->y; // TODO write a better algorithm not hardcode
	vertexData[2] = position->z;
	vertexData[3] = position->w;
	vertexData[4] = colour->r;
	vertexData[5] = colour->g;
	vertexData[6] = colour->b;
	vertexData[7] = colour->a;
	vertexData[8] = normal->x;
	vertexData[9] = normal->y;
	vertexData[10] = normal->z;
	vertexData[11] = normal->w;
	
	return vertexData;
}

GLuint* s2plotVertex::getIndices()
{
	indexArray[0] = offset; // vertex is a facet and a vertex therefore this must be array to honour contract
	return indexArray;
}


void s2plotVertex::draw()
{
	// TODO last argument could be NULL, or indices check it later
	glDrawRangeElements(GL_POINT, offset, offset, 1, GL_UNSIGNED_INT, 0);
}

GLfloat s2plotVertex::getDistance(Vector3f cameraPosition)
{
	return 1.0f; // TODO 
}

