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
	printf("get vertices\n");
	return NULL;
}
