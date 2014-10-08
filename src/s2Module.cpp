/*******************************************************************************
 * Copyright 2006-2012 David G. Barnes, Paul Bourke, Christopher Fluke
 *
 * This file is part of S2PLOT.
 *
 * S2PLOT is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * S2PLOT is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with S2PLOT.  If not, see <http://www.gnu.org/licenses/>. 
 *
 * We would appreciate it if research outcomes using S2PLOT would
 * provide the following acknowledgement:
 *
 * "Three-dimensional visualisation was conducted with the S2PLOT
 * progamming library"
 *
 * and a reference to
 *
 * D.G.Barnes, C.J.Fluke, P.D.Bourke & O.T.Parry, 2006, Publications
 * of the Astronomical Society of Australia, 23(2), 82-93.
 *
 * s2Module.cpp
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;
using namespace omicron;
using namespace std;

/* Draw function - the call back from the s2plotModules Render Pass
 * */
void s2Module::draw()
{	
	// call draw on all objects
	
	GLfloat sampleTriangle[] = { //remember specify coordinates anti clockwise ->normal openGL convention
		 -1.0f, 0.0f, 0.0f, 1.0f, //1
		 1.0f, 0.0f, 0.0f, 0.0f,
		 0.0f, 0.0f, 0.0f, 0.0f,

		 -1.0f, 1.0f, 0.0f, 1.0f, //3
		 0.0f, 1.0f, 0.0f, 0.0f,
		 0.0f, 0.0f, 0.0f, 0.0f,

		 1.0f, 1.0f, 0.0f, 1.0f, //2
		 0.0f, 0.0f, 1.0f, 0.0f,
		 0.0f, 0.0f, 0.0f, 0.0f,

		 1.0f, 0.0f, 0.0f, 1.0f, //4
		 0.0f, 0.0f, 1.0f, 0.0f,
		 0.0f, 0.0f, 0.0f, 1.0f,
	};	
	
	GLuint temp[] = {0,1,2, 0,2,3, 2,5,3, 3,5,7, 5,4,7, 7,4,6, 
		4,0,6, 6,0,1, 1,6,7, 1,3,7, 0,4,5, 5,0,2};
	
	GLuint sampleIndices[] = { 0,1,2, 0,2,3};
	
	vector<GLfloat>* vData = new vector<GLfloat>();
	vData->assign(sampleTriangle, sampleTriangle + 48);
	
	 facets->clear();
	 vertexData->clear();
	 indices->clear();
	 
	 s2Vertex* v1 = new s2Vertex(-1.0f, 0.0f, 0.0f, 1.0f);
	 s2Vertex* v2 = new s2Vertex(0.0f, 1.0f, 0.0f, 1.0f);
	 s2Vertex* v3 = new s2Vertex(1.0f, 0.0f, 0.0f, 1.0f);
	
	 vec3 t1 = vec3(0, 1, 2);
	 
	 GLuint* a = new GLuint;
	 *a = 0;
	 
	 facets->push_back(new s2Triangle(a, v1, v2, v3, t1));
	 

	 vertexData->insert( vertexData->end(),
							v1->getVertexData()->begin(),
							v1->getVertexData()->end());
	 vertexData->insert( vertexData->end(),
							v2->getVertexData()->begin(),
							v2->getVertexData()->end());
	 vertexData->insert( vertexData->end(),
							v3->getVertexData()->begin(),
							v3->getVertexData()->end());
	
	 
	 indices->push_back(0);
	 indices->push_back(1);
	 indices->push_back(2);
	
	//vData->resize(vData->size());
	
	 // printf("size %d \n", (int) vData->size()); 
	 printf("drawing %d %d %f\n", 
						 (int) (sizeof(GLuint) * indices->size()), 
						 (int) (sizeof(GLfloat) * vertexData->size())
						, vertexData->at(0));

	 s2Program* s2prog = new s2Program();
	 GLuint sampleVBO; //remember unsigne int here
	 
	 glGenBuffers(1, &sampleVBO); //1 = number of vbos to make
	 glBindBuffer(GL_ARRAY_BUFFER, sampleVBO);
	 //glBufferData(GL_ARRAY_BUFFER, (sizeof(sampleTriangle)), sampleTriangle, GL_STATIC_DRAW);
	 glBufferData(GL_ARRAY_BUFFER, (sizeof(GLfloat) * vertexData->size()), vertexData->data(), GL_STATIC_DRAW);
	 

	 GLuint indexBufferID;
	 glGenBuffers(1, &indexBufferID);
	 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferID);
	 //glBufferData(GL_ELEMENT_ARRAY_BUFFER, (sizeof(sampleIndices)), sampleIndices, GL_STATIC_DRAW);
	 glBufferData(GL_ELEMENT_ARRAY_BUFFER, (sizeof(GLuint) * indices->size()), indices->data(), GL_STATIC_DRAW);

	 glEnableVertexAttribArray(0); 
	 glEnableVertexAttribArray(1);

	 GLsizei sizeOfVector4InBytes = sizeof(GLfloat) * 12;
	 glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes, 0);
	 glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes,
	 (void*) (sizeof(GLfloat) * 4));


	 //GLint posAttrib = glGetAttribLocation(shaderProgram, "position");
	 //glVertexAttribPointer(posAttrib, 2, GL_FLOAT, GL_FALSE, 0, 0);
	
	
	 glUseProgram(s2prog->getShaderProgramRef());

	 glDrawArrays(GL_TRIANGLES, 0, 3);
	 //glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, (void*)(0 * sizeof(GLuint)));
}

/* Constructor - creates an engine module with the name "s2plotModule"
 * The module handles event call backs data structures and the 
 * renderpass
 * */
s2Module::s2Module(): EngineModule("s2Module")
{
	s2Module::initialise();
	//s2Module::initialiseGL();
	flag = 0;
}

s2Module::~s2Module()
{
	// FREE MEMORY FOR DATA STRUCTURES
	//delete sceneObjects;
	//delete facets;
	//delete vertexData;
	//delete callBacks;
}

/**
 * initialises the vector data structures required by the module. 
 **/
void s2Module::initialise()
{	
	sceneObjects = new vector<s2Geom*>();
	facets = new vector<s2Primitive*>();
	vertexData = new vector<GLfloat>();
	indices = new vector<GLuint>();
	callBacks = new vector<callback_function>();	
}

/**
 * initialises open GL buffer and shader program constructs.
 **/
void s2Module::initialiseGL()
{
	shaderProgram = new s2Program();
	
	glGenBuffers(1, &vertexBufferRef);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferRef);
	
	glGenBuffers(1, &indexBufferRef);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferRef);
	
	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	
	GLsizei stride = sizeof(GLfloat) * 12; // TODO magic number
	
	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, stride, 0);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, stride, 
							(void*) (sizeof(GLfloat) * 4));
							
	glUseProgram(shaderProgram->getShaderProgramRef());
	

}

void s2Module::update(const UpdateContext& context)
{
	/* delete any geometry as instructed by the user and handle any other events
	 * by broadcasting the event to each object then finally sort the verticie 
	 * array back to front based on camera position 
	 * 
	 * */
	//callBack();
	cameraPosition = camera->getPosition();
	//sortFacets(0, facets->size());
}

void s2Module::initializeRenderer(Renderer* r)
{
    s2RenderPass* s2plotrp = new s2RenderPass(r, "s2RenderPass");
    s2plotrp->setUserData(this);
    r->addRenderPass(s2plotrp);
    camera = r->getEngine()->getDefaultCamera();
}

void s2Module::handleEvent(const Event& evt)
{
		callBack();
}

void s2Module::callBack()
{
	vector<callback_function>::iterator callBackIterator = callBacks->begin();
	
	while (callBackIterator != callBacks->end())
	{
		(*callBackIterator)();
		++callBackIterator;
	}
}

void s2Module::addCallBack(callback_function function)
{
	callBacks->push_back(function);	
}

void s2Module::sortFacets(int beg, int end)
{
	/*if(beg < end)
	{
		int p = partition(beg, end);
		
		sortFacets(beg, p - 1);
		sortFacets(p + 1, end);		
	}	
	*/
}

int s2Module::partition(int beg, int end)
{
	/*
	int p = beg, loc;
	s2plotPrimitiveFacet* pivot = facets->at(beg);
	
	for (loc = beg + 1; loc <= end; loc++)
	{
		if (pivot->getDistance(cameraPosition) > 
			facets->at(loc)->getDistance(cameraPosition))
		{
			facets->at(p) = facets->at(loc);
			facets->at(loc) = facets->at(p + 1);
			facets->at(p + 1) = pivot;
			
			p = p + 1;
		}
	}
	
	return p;
	*/
	return 1;
	
}

/* sceneObjects->size()-1 will never be negative
 *  TODO these two overloaded methods duplicate a lot of code
 * */
GLuint s2Module::addObject(s2PolyObject* object)
{
	
	 
	sceneObjects->push_back(object);

	facets->insert(facets->end(), object->getPrimitives()->begin(), 
					object->getPrimitives()->end());
					
	vertexData->insert( vertexData->end(),
						object->getVertexData()->begin(),
						object->getVertexData()->end());
	
	vector<s2Primitive*>* tempPrimVec = object->getPrimitives();
	
	int i;
	for(i = 0; i < tempPrimVec->size(); i++)
	{					
		indices->insert(indices->end(), 
						tempPrimVec->at(i)->getIndices()->begin(),
						tempPrimVec->at(i)->getIndices()->end());
	}	
										
	return sceneObjects->size() - 1;
}

GLuint s2Module::addObject(s2Primitive* primitive)
{
	sceneObjects->push_back(primitive);
	
	facets->insert(facets->end(), primitive->getPrimitives()->begin(), 
					primitive->getPrimitives()->end());
	
	vertexData->insert( vertexData->end(),
						primitive->getVertexData()->begin(),
						primitive->getVertexData()->end());
	
	vector<s2Primitive*>* tempPrimVec = primitive->getPrimitives();
		
	int i;
	for(i = 0; i < tempPrimVec->size(); i++)
	{
		indices->insert(indices->end(), 
						tempPrimVec->at(i)->getIndices()->begin(),
						tempPrimVec->at(i)->getIndices()->end());
	}		
										
	return sceneObjects->size() - 1;
}

/* This delete method is not efficient and needs a better solution
 * O(mn) where m is the size of the vector of all facets in the scene and n is
 * the size of the vector of facets belonging to the object being deleted. So 2
 * nested loops. There must be a better solution here maybe keep an indicie 
 * value. 
 * 
 * */
bool s2Module::deleteObject(GLuint id)
{
	/**
	 * get all the primitives for this object and set them all to NULL 
	 **/
	//sceneObjects->at(id)->getPrimitives();
	return false;
}

s2Factory* s2Module::createFactory()
{
	return new s2Factory(this);
}

const s2Geom* s2Module::getObject(GLuint id)
{
	return sceneObjects->at(id);
}
