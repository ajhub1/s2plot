#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;


s2plotTriangle::s2plotTriangle()
{
	printf("default triangle created\n");
	
	
	
}

s2plotTriangle::s2plotTriangle(glm::vec4 p0, glm::vec4 p1, glm::vec4 p2)
{
	printf("triangle created %f \n", p0.x);
	
	
	
}

void s2plotTriangle::draw()
{
	printf("triangle draw\n");
	
	
	
}

GLfloat s2plotTriangle::getDistance()
{
	printf("triangle getDistance\n");
	
	
	
}
