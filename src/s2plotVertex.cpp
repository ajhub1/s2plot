#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

using namespace omega;
using namespace glm;	

s2plotVertex::s2plotVertex()
{
	position = vec4(0.0f,0.0f,0.0f,0.0f);
	colour = vec4(0.0f,0.0f,0.0f,0.0f);
	normal = vec4(0.0f,0.0f,0.0f,0.0f);
}

s2plotVertex::s2plotVertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	position = vec4(x, y, z,1.0f);
	colour = vec4(0.0f,0.0f,0.0f,1.0f);
	normal = vec4(0.0f,0.0f,0.0f,0.0f);
}

			
void s2plotVertex::setPosition(vec4 position)
{
	this->position = position;
}
	
void s2plotVertex::setColour(vec4 colour)
{
	this->colour = colour;
}
void s2plotVertex::setNormal(vec4 normal)
{
	this->colour = normal;
}

vec4 s2plotVertex::getPosition()
{
	return position;
}
vec4 s2plotVertex::getColour()
{
	return colour;
}
vec4 s2plotVertex::getNormal()
{
	return normal;
}

GLfloat* getVertexData()
{
	GLfloat* vdata[12];
	int sizeOfVertex = 12;	//TODO fix later
	
	for (int i = 0; i < 3; i++)
	{
		vdata[i*sizeOfVertex] = getPosition().x;
		vdata[i*sizeOfVertex * sizeof(float)+1] = getPosition().y;
		vdata[i*sizeOfVertex * sizeof(float)+2] = getPosition().z;
		vdata[i*sizeOfVertex * sizeof(float)+3] = getPosition().w;
		
		vdata[i*sizeOfVertex + 4] = getColour().r;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+1] = getColour().g;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+2] = getColour().b;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+3] = getColour().a;
		
		vdata[i*sizeOfVertex + 8] = getNormal().x;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+1] = getNormal().y;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+2] = getNormal().z;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+3] = getNormal().w;
	}
	
	return vdata;
}






