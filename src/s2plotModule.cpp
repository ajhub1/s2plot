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
#include <omicron.h>
#include <omp.h>

using namespace s2plot;
using namespace omega;
using namespace omicron;
using namespace std;
/* Draw function - the call back from the s2plotModules Render Pass
 * 
 * */
void s2plotModule::Draw()
{
	// call draw on all objects

}

/* Constructor - creates an engine module with the name "s2plotModule"
 * The module handles event call backs data structures and the 
 * renderpass
 * */
s2plotModule::s2plotModule(): EngineModule("s2plotModule")
{
	initialize();
	
}

////////////////////////////////////////////////////////////////////////////////
s2plotModule::~s2plotModule()
{
	// FREE MEMORY FOR DATA STRUCTURES
	//delete sceneObjects;
	//delete facets;
	//delete vertexData;
	//delete callBacks;
	
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initialize()
{
	// setup the data structures for handling objects internally
	sceneObjects = new s2plotRenderableObject*[100];
	facets = new s2plotPrimitiveFacet*[100];
	vertexData = new s2plotVertex[300];
	callBacks = new vector<callback_function>();
	objectCounter = 0;
	facetCounter = 0;
	vertexCounter = 0;
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::update(const UpdateContext& context)
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
////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initializeRenderer(Renderer* r)
{
    s2plotRenderPass* s2plotrp = new s2plotRenderPass(r, "s2plotRenderPass");
    s2plotrp->setUserData(this);
    r->addRenderPass(s2plotrp);
    camera = r->getEngine()->getDefaultCamera();
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::sortFacets(int beg, int end)
{
	/*if(beg < end)
	{
		int p = partition(beg, end);
		
		sortFacets(beg, p - 1);
		sortFacets(p + 1, end);		
	}	
	*/
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::handleEvent(const Event& evt)
{
		callBack();
}

////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
void s2plotModule::callBack()
{
	vector<callback_function>::iterator callBackIterator = callBacks->begin();
	
	while (callBackIterator != callBacks->end())
	{
		(*callBackIterator)();
		++callBackIterator;
	}
}

////////////////////////////////////////////////////////////////////////////////
void s2plotModule::addCallBack(callback_function function)
{
	callBacks->push_back(function);	
}

////////////////////////////////////////////////////////////////////////////////
int s2plotModule::partition(int beg, int end)
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

////////////////////////////////////////////////////////////////////////////////
s2plotRenderableObject* s2plotModule::addObject(s2plotRenderablePolyObject* 
													object)
{
	// push object, then facets, then vertexData into their datastructures
	sceneObjects[0] = object;
	s2plotPrimitiveFacet** tempFacet = object->getFacets<s2plotPrimitiveFacet**>();
	memcpy(facets[facetCounter], tempFacet, (sizeof(tempFacet) / 
			sizeof(tempFacet[0]) * sizeof(tempFacet)));
			
	return object;
}

////////////////////////////////////////////////////////////////////////////////
s2plotRenderableObject* s2plotModule::addObject(s2plotPrimitiveFacet* facet)
{
	// push object, then facet (facet only has one facet), then vertexData into 
	sceneObjects[0] = facet;
	s2plotPrimitiveFacet** tempFacet = (s2plotPrimitiveFacet**) 
										facet->getFacets<s2plotVertex**>();
	memcpy(facets[facetCounter], tempFacet, (sizeof(tempFacet) /  
			sizeof(tempFacet[0]) * sizeof(tempFacet)));
	return facet;
}

/* This delete method is not efficient and needs a better solution
 * O(mn) where m is the size of the vector of all facets in the scene and n is
 * the size of the vector of facets belonging to the object being deleted. So 2
 * nested loops. There must be a better solution here maybe keep an indicie 
 * value. 
 * 
 * */
////////////////////////////////////////////////////////////////////////////////
bool s2plotModule::deleteObject(s2plotRenderablePolyObject* object)
{
	// iterator for the object vector
	/*vector<s2plotRenderableObject*>::iterator objectIterator = 
														sceneObjects->begin();
	
	// loop through the object vector searching for the object
	
	while (objectIterator != sceneObjects->end())
	{
		if ((s2plotRenderablePolyObject*) &(*objectIterator) == object)
		{
			// delete the object from the sceneobjects vector
			sceneObjects->erase(objectIterator);
			
			// find the facets
			
			// iterator for the facet vector
			vector<s2plotPrimitiveFacet*>::iterator facetIterator = 
															facets->begin();
			// find the objects associated facets
			while (facetIterator != facets->end())
			{
				for (int i = 0; i < object->getFacets()->size(); i++) 
				{
					if ((*facetIterator) == 
												object->getFacets()->at(i))
					{
						// delete the facet out of the facet vector
						facets->erase(facetIterator);		
					}
				}
				
				++facetIterator;
			}
			// delete the object including facets and verticies
			delete object;
		}
		++objectIterator;
	}*/
	return true;
	
}

////////////////////////////////////////////////////////////////////////////////
bool s2plotModule::deleteObject(s2plotPrimitiveFacet* facet)
{
	// iterator for the object vector
	/*vector<s2plotRenderableObject*>::iterator objectIterator = 
														sceneObjects->begin();
	
	// loop through the object vector searching for the facet object
	
	while (objectIterator != sceneObjects->end())
	{
		if ((s2plotPrimitiveFacet*) &(*objectIterator) == facet)
		{
			// delete facet object from the sceneobjects vector
			sceneObjects->erase(objectIterator);
			
		}
		
		++objectIterator;
	}
	
	// iterator for the facet vector
	vector<s2plotPrimitiveFacet*>::iterator facetIterator = 
													facets->begin();
	// find the facet in the facet vector
	while (facetIterator != facets->end())
	{

		if ((*facetIterator) == facet)
		{
			// delete the facet out of the facet vector
			facets->erase(facetIterator);	
			break;	
		}
		
		++facetIterator;
	}
				

	// delete the object including facets and verticies
	delete facet;
	*/
	return true;
	
}

////////////////////////////////////////////////////////////////////////////////
s2plotFactory* s2plotModule::createFactory()
{
	return new s2plotFactory(this);
}

