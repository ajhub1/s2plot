#include "s2plot/s2plot.h"
#include <omegaGl.h>

using namespace s2plot;
using namespace omega;
using namespace std;

s2plotTriangle::s2plotTriangle(GLuint baseOffset, s2plotVertex* p0, s2plotVertex* p1, s2plotVertex* p2)
{
	vertices[0] = p0;
	vertices[1] = p1;
	vertices[2] = p2;
	
	
	//TODO use initializer list, recommended for C++??, ask adam
	this->baseOffset = baseOffset;
	
	printf("triangle constructed\n");
}

void s2plotTriangle::draw(const GLfloat* indices)
{
	printf("triangle draw\n");
	glDrawRangeElements(GL_TRIANGLES, baseOffset, baseOffset + 3, 3, GL_UNSIGNED_INT, 0);
	
}

void s2plotTriangle::setBaseOffset(GLuint baseOffset)
{
	this->baseOffset = baseOffset;
}

std::vector<s2plotPrimitiveFacet*> s2plotTriangle::getFacets()
{
	return *(new vector<s2plotPrimitiveFacet*>());
	
}


GLfloat s2plotTriangle::getDistance(Vector3f cameraPosition)
{
	printf("triangle getDistance\n");
	
	
	
}

s2plotVertex* s2plotTriangle::dummy()
{
	printf("triangle dummy %f\n", + vertices[0]->getPosition().x);
	return vertices;
}


std::vector<GLuint>* s2plotTriangle::getVertexIndices()
{
	return NULL;
}


std::vector<GLfloat> s2plotTriangle::getVertexData()
{
	int sizeOfVertex = 12;	//TODO fix later
	
	for (int i = 0; i < 3; i++)
	{
		/*
		vdata[i*sizeOfVertex] = vertices[i].getPosition().x;
		vdata[i*sizeOfVertex * sizeof(float)+1] = vertices[i].getPosition().y;
		vdata[i*sizeOfVertex * sizeof(float)+2] = vertices[i].getPosition().z;
		vdata[i*sizeOfVertex * sizeof(float)+3] = vertices[i].getPosition().w;
		
		vdata[i*sizeOfVertex + 4] = vertices[i].getColour().r;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+1] = vertices[i].getColour().g;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+2] = vertices[i].getColour().b;
		vdata[i*sizeOfVertex + 4 * sizeof(float)+3] = vertices[i].getColour().a;
		
		vdata[i*sizeOfVertex + 8] = vertices[i].getNormal().x;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+1] = vertices[i].getNormal().y;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+2] = vertices[i].getNormal().z;
		vdata[i*sizeOfVertex + 8 * sizeof(float)+3] = vertices[i].getNormal().w;
		* */
	}
	
	return vdata;
}
