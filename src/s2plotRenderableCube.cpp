#include <omegaGl.h>
#include <omega.h>
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;
using namespace glm;
using namespace std;

s2plotRenderableCube::s2plotRenderableCube(GLuint* offsetptr, GLfloat size, glm::vec4 position)
{	
	init(offsetptr);
}

/*
s2plotRenderableCube::s2plotRenderableCube(const s2plotRenderableCube& that)
{
	this->init(that.offsetptr);
}

s2plotRenderableCube& s2plotRenderableCube::operator=(const s2plotRenderableCube& that)
{
	if (this != &that)
	{
		this->init(that.offsetptr);
	}
	return *this;
}
*/

s2plotRenderableCube::~s2plotRenderableCube()
{
	//TODO make sure this is corret way to do this 
	
	for (int i = 0; i < 8; i++)
	{
		delete vertices[i];
	}
	//we do not delete vertices because its a local variable
	
	for (vector<s2plotPrimitiveFacet*>::iterator it = facets->begin(); it != facets->end(); ++it) 
	{ 
	   delete *it; 
	}
	
	delete indices;
	delete facets;
}
	
void s2plotRenderableCube::init(GLuint* offsetptr)
{
	facets = new vector<s2plotPrimitiveFacet*>();
	indices = new vector<GLuint>();

	
	GLuint temp[] = {0,1,2, 1,2,3, 2,5,3, 3,5,7, 5,4,7, 7,4,6, 4,0,6, 6,0,1, 1,6,7, 1,3,7, 0,4,5, 5,0,2};
	indices->assign(temp, temp + NUMBER_OF_INDICES);	//convert array into a vector

	//vertices
	
	vertices[0] = new s2plotVertex(0.0f, 0.0f, 0.0f, 0.0f);
	vertices[1] = new s2plotVertex(0.0f, 1.0f, 0.0f, 0.0f);
	vertices[2] = new s2plotVertex(1.0f, 0.0f, 0.0f, 0.0f);
	vertices[3] = new s2plotVertex(1.0f, 1.0f, 0.0f, 0.0f);
	vertices[4] = new s2plotVertex(0.0f, 0.0f, 1.0f, 0.0f);
	vertices[5] = new s2plotVertex(0.0f, 1.0f, 1.0f, 0.0f);
	vertices[6] = new s2plotVertex(1.0f, 0.0f, 1.0f, 0.0f);
	vertices[7] = new s2plotVertex(1.0f, 1.0f, 1.0f, 0.0f);
	
	//front face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[0], vertices[1], 
						vertices[2]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[1], vertices[2],  
						vertices[3]));
	
	//right face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[2], vertices[5],  
						vertices[3]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[3], vertices[5],  
						vertices[7]));
	
	//back face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[5], vertices[4],  
						vertices[7]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[7], vertices[4],  
						vertices[6]));
	
	//left face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[4], vertices[0],  
						vertices[6]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[6], vertices[0],  
						vertices[1]));
	
	//top face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[1], vertices[6],  
						vertices[7]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[1], vertices[3],  
						vertices[7]));
	
	//bottom face
	facets->push_back(new s2plotTriangle(offsetptr, vertices[0], vertices[4],  
						vertices[5]));
	facets->push_back(new s2plotTriangle(offsetptr, vertices[5], vertices[0],  
						vertices[2]));
	
}

s2plotPrimitiveFacet** s2plotRenderableCube::getFacets()
{
	
	//std::vector<s2plotPrimitiveFacet*>* v;
	//s2plotPrimitiveFacet** a = &v[0];
	//s2plotPrimitiveFacet** returnValue = &facets[0];
	return (s2plotPrimitiveFacet**)*(&facets);
}

void s2plotRenderableCube::updateFacetOffsets(GLuint baseOffset)
{
	// TODO shifaz is a bitch
}
