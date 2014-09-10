#include <omegaGl.h>
#include <omega.h>
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;
using namespace glm;
using namespace std;

s2plotRenderableCube::s2plotRenderableCube(GLuint baseOffset, GLfloat size, glm::vec4 position)
{
	printf("\n s2cube\n");
	
	init(baseOffset);
}

void s2plotRenderableCube::init(GLuint baseOffset)
{
	facets = new vector<s2plotPrimitiveFacet*>();
	indices = new vector<GLuint>();
	
	GLuint temp[] = {0,1,2, 1,2,3, 2,5,3, 3,5,7, 5,4,7, 7,4,6, 4,0,6, 6,0,1, 1,6,7, 1,3,7, 0,4,5, 5,0,2};
	indices->assign(temp, temp + NUMBER_OF_INDICES);	//convert array into a vector

	//vertices
	
	vertices[0] = new s2plotVertex(0.0f,0.0f,0.0f,0.0f);
	vertices[1] = new s2plotVertex(0.0f,1.0f,0.0f,0.0f);
	vertices[2] = new s2plotVertex(1.0f,0.0f,0.0f,0.0f);
	vertices[3] = new s2plotVertex(1.0f,1.0f,0.0f,0.0f);
	vertices[4] = new s2plotVertex(0.0f,0.0f,1.0f,0.0f);
	vertices[5] = new s2plotVertex(0.0f,1.0f,1.0f,0.0f);
	vertices[6] = new s2plotVertex(1.0f,0.0f,1.0f,0.0f);
	vertices[7] = new s2plotVertex(1.0f,1.0f,1.0f,0.0f);

	//front face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 0 ,vertices[0] ,vertices[1] ,vertices[2]));	//*0 for readability
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 1 ,vertices[1] ,vertices[2] ,vertices[3]));	//TODO magic
	
	//right face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 2 ,vertices[2] ,vertices[5] ,vertices[3]));
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 3 ,vertices[3] ,vertices[5] ,vertices[7]));
	
	//back face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 4 ,vertices[5] ,vertices[4] ,vertices[7]));
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 5 ,vertices[7] ,vertices[4] ,vertices[6]));
	
	//left face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 6 ,vertices[4] ,vertices[0] ,vertices[6]));
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 7 ,vertices[6] ,vertices[0] ,vertices[1]));
	
	//top face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 8 ,vertices[1] ,vertices[6] ,vertices[7]));
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 9 ,vertices[1] ,vertices[3] ,vertices[7]));
	
	//bottom face
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 10 ,vertices[0] ,vertices[4] ,vertices[5]));
	facets->push_back(new s2plotTriangle(baseOffset + 12 * 11 ,vertices[5] ,vertices[0] ,vertices[2]));
	
}

std::vector<s2plotPrimitiveFacet*>* s2plotRenderableCube::getFacets()
{
	return facets;
}

std::vector<GLuint>* s2plotRenderableCube::getVertexIndices()
{

	for (int i= 0; i < indices->size(); i++)
	{
		indices->at(i) = baseOffset + indices->at(i);
	}

	return indices;
	
}

void s2plotRenderableCube::updateFacetOffsets(GLuint baseOffset)
{
	for (int i = 0; i < NUMBER_OF_FACETS; i++)
	{
		facets->at(i)->setBaseOffset(baseOffset + 12 * i);
	}
}
