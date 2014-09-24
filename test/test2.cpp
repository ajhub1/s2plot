//g++ templates/RenderableObject.cpp templates/RenderablePolyObject.cpp 
//templates/PrimitiveFacet.cpp templates/Vertex.cpp templates/Cube.cpp 
//templates/Triangle.cpp test2.cpp -o test2

#include <stdlib.h>
#include <stdio.h>

#include "templates/mainheader.h"

using namespace s2plot;

int main()
{
	Cube* cube = new Cube();
	Vertex* vertex = new Vertex();
	Triangle triangle;
	
	RenderableObject* ro = (RenderableObject*) new Cube();
	
	ro->getFacets<PrimitiveFacet**>();
	
	PrimitiveFacet** bb = cube->getFacets<PrimitiveFacet**>();
	Vertex** cc = vertex->getFacets<Vertex**>();
	Vertex** dd = triangle.getFacets<Vertex**>();
	
	
}
