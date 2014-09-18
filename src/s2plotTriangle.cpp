#include "s2plot/s2plot.h"
#include <omegaGl.h>

using namespace s2plot;
using namespace omega;
using namespace std;

s2plotTriangle::s2plotTriangle(GLuint* offsetptr, s2plotVertex* p0, s2plotVertex* p1, s2plotVertex* p2)
{
	vertices[0] = p0;
	vertices[1] = p1;
	vertices[2] = p2;
	*offsetptr = *offsetptr + NUMBER_OF_VERTICES_PER_TRIANGLE;
	offset = *offsetptr;
	//indices = GLuint[NUMBER_OF_VERTICES_PER_TRIANGLE];
}

s2plotTriangle::s2plotTriangle(const s2plotTriangle& that)
{	
	vertices[0] = that.vertices[0]; // TODO if seg fault find me
	vertices[1] = that.vertices[1];
	vertices[2] = that.vertices[2];
	offset = that.offset;
}

s2plotTriangle& s2plotTriangle::operator=(const s2plotTriangle& that)
{
		if (this != &that)
		{
			vertices[0] = that.vertices[0]; // TODO if seg fault find me
			vertices[1] = that.vertices[1];
			vertices[2] = that.vertices[2];
			offset = that.offset;
		}
		
		return *this;
}

s2plotTriangle::~s2plotTriangle()
{
	// no memory to free 
}

s2plotPrimitiveFacet** s2plotTriangle::getFacets()
{
	// method is called getFacets() but return vertices.
	return (s2plotPrimitiveFacet**) vertices; // TODO will this go out of scope seg fault
}
		
void s2plotTriangle::draw()
{
	glDrawRangeElements(GL_TRIANGLES, offset, offset + 2, 3, GL_UNSIGNED_INT, 0);
}

GLfloat s2plotTriangle::getDistance(Vector3f cameraPosition)
{
	return 1.0f; // TODO 
}

s2plotVertex** s2plotTriangle::getVertices()
{
	return &vertices[0];
}

GLuint* s2plotTriangle::getIndices()
{
	indices[0] = offset + 0;
	indices[1] = offset + 1;
	indices[2] = offset + 2;
	
	return indices;
}
