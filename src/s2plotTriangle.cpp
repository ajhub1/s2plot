#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;


s2plotTriangle::s2plotTriangle()
{
	printf("default triangle created\n");
	//const int numVertices= 3;
	
	
}

s2plotTriangle::s2plotTriangle(s2plotVertex p0, s2plotVertex p1, s2plotVertex p2)
{
	printf("triangle created  \n");

	s2plotVertex vertices[NUMBER_OF_VERTICES_PER_TRIANGLE];
	GLfloat vdata[12];
		
	vertices[0] = p0;
	vertices[1] = p1;
	vertices[2] = p2;

}

void s2plotTriangle::draw()
{
	printf("triangle draw\n");
	
	
	
}

GLfloat s2plotTriangle::getDistance()
{
	printf("triangle getDistance\n");
	
	
	
}

GLfloat* s2plotTriangle::getVertexData()
{
	int sizeOfVertex = 12;	//TODO fix later
	
	for (int i = 0; i < 3; i++)
	{
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
	}
	
	return vdata;
}
