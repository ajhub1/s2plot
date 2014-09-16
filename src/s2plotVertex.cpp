#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

using namespace omega;
using namespace glm;	

s2plotVertex::s2plotVertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{	
	position = new vec4(x,y,z,w);
	colour = new vec4(1.0f,1.0f,1.0f,1.0f);
	normal = new vec4(1.0f,1.0f,1.0f,1.0f); // TODO think about normal default
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

GLfloat* getVertexData()
{
	return NULL; // TODO implement this
}




