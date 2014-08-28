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
 * s2plotModule
 * 
 ******************************************************************************/
#include "s2plot/s2plot.h"
#include <omp.h>

using namespace s2plot;
using namespace omega;

/* Draw function - the call back from the s2plotModules Render Pass
 * 
 * */
void s2plotModule::Draw()
{
	// call draw on all objects
	GLfloat sampleTriangle[] = {			//remember specify coordinates anti clockwise ->normal openGL convention
				1.0f, 0.0f, 1.0f, 1.0f, //1
				1.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				0.0f, 1.0f, 1.0f, 1.0f, //3
				0.0f, 1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				-1.0f, 0.0f, 1.0f, 1.0f, //2
				0.0f, 0.0f, 1.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				//0.0f, 0.0f, 1.0f, 1.0f, //4
				//0.0f, 0.0f, 1.0f, 0.0f,
				//0.0f, 0.0f, 0.0f, 0.0f,
			};
				
			GLuint sampleVBO;	//remember unsigne int here
			glGenBuffers(1, &sampleVBO);		//1 = number of vbos to make
			glBindBuffer(GL_ARRAY_BUFFER, sampleVBO);
			glBufferData(GL_ARRAY_BUFFER, sizeof(sampleTriangle), sampleTriangle, GL_STATIC_DRAW);
			GLsizei sizeOfVector4InBytes = sizeof(GLfloat) * 12;
			
			glEnableVertexAttribArray(0);
			glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE,  sizeOfVector4InBytes, 0);
			glDrawArrays(GL_TRIANGLES, 0, 3);
	
	
		
	
}

/* Constructor - creates an engine module with the name "s2plotModule"
 * 
 * */
s2plotModule::s2plotModule(): EngineModule("s2plotModule")
{
	this->initialize();
}

s2plotModule::~s2plotModule()
{

}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initialize()
{
	// setup the data structures for handling objects internally
	objectId = 0;
	
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::update(const UpdateContext& context)
{
	/* delete any geometry as instructed by the user and handle any other events
	 * by broadcasting the event to each object then finally sort the verticie 
	 * array back to front based on camera position 
	 * 
	 * */
	sortFacets(0, facets->size());
	
}
////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initializeRenderer(Renderer* r)
{
    s2plotRenderPass* s2plotrp = new s2plotRenderPass(r, "s2plotRenderPass");
    s2plotrp->setUserData(this);
    r->addRenderPass(s2plotrp);
}

void s2plotModule::sortFacets(int beg, int end)
{
	//get camera position 
	if(beg < end)
	{
		int p = partition(facets, beg, end);
		
		sortFacets(facets, beg, p - 1);
		sortFacets(facets, p + 1, end);		
	}	
}

int s2plotModule::partition(int beg, int end)
{
	
	int p = beg, pivot = facets->at(beg), loc;
	
	for (loc = beg + 1; loc <= end; loc++)
	{
		if (pivot > facets->at(loc))
		{
			facets->at(p) = facets->at(loc);
			facets->at(loc) = facets->at(p + 1);
			facets->at(p + 1) = pivot;
			
			p = p + 1;
		}
	}
	
	return p;
}

int s2plotModule::addObject(s2plotRenderableObject* object)
{
	objectId++;
	return 0;
}

bool s2plotModule::deleteObject(int objectId)
{
	return true;
}

s2plotFactory* s2plotModule::createFactory()
{
	return new s2plotFactory(this);
}
