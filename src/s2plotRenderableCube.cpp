#include <omegaGl.h>
#include <omega.h>
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;
using namespace glm;


s2plotRenderableCube::s2plotRenderableCube(GLuint baseOffset)
{
	printf("\n s2cube\n");
	
	init(baseOffset);
}

void s2plotRenderableCube::init(GLuint baseOffset)
{
	s2plotTriangle* facets[NUMBER_OF_FACETS];
	GLuint temp[] = {0,1,2, 1,2,3, 2,5,3, 3,5,7, 5,4,7, 7,4,6, 4,0,6, 6,0,1, 1,6,7, 1,3,7, 0,4,5, 5,0,2};
	
	indices.assign(temp, temp + NUMBER_OF_INDICES);	//convert array into a vector
	
	//vertices
	s2plotVertex p0(0.0f,0.0f,0.0f,0.0f);
	s2plotVertex p1(0.0f,1.0f,0.0f,0.0f);
	s2plotVertex p2(1.0f,0.0f,0.0f,0.0f);
	s2plotVertex p3(1.0f,1.0f,0.0f,0.0f);
	
	s2plotVertex p4(0.0f,0.0f,1.0f,0.0f);
	s2plotVertex p5(0.0f,1.0f,1.0f,0.0f);
	s2plotVertex p6(1.0f,0.0f,1.0f,0.0f);
	s2plotVertex p7(1.0f,1.0f,1.0f,0.0f);

	//front face
	facets[0] = new s2plotTriangle(baseOffset + 12 * 0 ,p0 ,p1 ,p2);	//*0 for readability
	facets[1] = new s2plotTriangle(baseOffset + 12 * 1 ,p1 ,p2 ,p3);	//TODO magic
	
	//right face
	facets[2] = new s2plotTriangle(baseOffset + 12 * 2 ,p2 ,p5 ,p3);
	facets[3] = new s2plotTriangle(baseOffset + 12 * 3 ,p3 ,p5 ,p7);
	
	//back face
	facets[4] = new s2plotTriangle(baseOffset + 12 * 4 ,p5 ,p4 ,p7);
	facets[5] = new s2plotTriangle(baseOffset + 12 * 5 ,p7 ,p4 ,p6);
	
	//left face
	facets[6] = new s2plotTriangle(baseOffset + 12 * 6 ,p4 ,p0 ,p6);
	facets[7] = new s2plotTriangle(baseOffset + 12 * 7 ,p6 ,p0 ,p1);
	
	//top face
	facets[8] = new s2plotTriangle(baseOffset + 12 * 8 ,p1 ,p6 ,p7);
	facets[9] = new s2plotTriangle(baseOffset + 12 * 9 ,p1 ,p3 ,p7);
	
	//bottom face
	facets[10] = new s2plotTriangle(baseOffset + 12 * 10 ,p0 ,p4 ,p5);
	facets[11] = new s2plotTriangle(baseOffset + 12 * 11 ,p5 ,p0 ,p2);
	
}

s2plotTriangle** s2plotRenderableCube::getFacets()
{
	return facets;
}

void s2plotRenderableCube::updateFacetOffsets(GLuint baseOffset)
{
	for (int i = 0; i < NUMBER_OF_FACETS; i++)
	{
		facets[i].setBaseOffset(baseOffset + 12 * i);
	}
}


std::vector<GLuint> s2plotRenderableCube::getVertexIndices()
{

	int len = sizeof(indices)/sizeof(int);
	
	for (int i= 0; i < len; i++)
	{
		indices[i] = baseOffset + indices[i];
	}
	
	return indices;
	
}
