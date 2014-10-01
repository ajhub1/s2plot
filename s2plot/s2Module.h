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
 * s2Module.h
 * 
 ******************************************************************************/
#ifndef S2MODULE_H
#define S2MODULE_H

#include "s2plot/s2plot.h"

namespace s2plot 
{
	using namespace omega;
	class s2Factory;
	class s2Geom;
	class s2PolyObject;
	class s2Primitive;
	class s2Vertex;
	class s2Program;
	
	class s2Module: public EngineModule
	{
		public:
			s2Module();
			virtual ~s2Module();
			void initialise();
			
			void update(const UpdateContext& context);	
			void draw();
			
			GLuint addObject(s2PolyObject* object);
			GLuint addObject(s2Primitive* facet);
			bool deleteObject(GLuint id);
			const s2Geom* getObject(GLuint id);
			
			void initializeRenderer(Renderer* r);
			s2Factory* createFactory();
			
			typedef void (*callback_function)(void);
			void addCallBack(callback_function function);
			virtual void handleEvent(const Event& evt);
			Event event();
													
		private:
			void sortFacets(int beg, int end);
			int partition(int beg, int end);
			
			vector<s2Geom*>* sceneObjects;
			vector<s2Primitive*>* facets;
			vector<GLfloat>* vertexData;
			vector<GLuint>* indices;
						
			GLuint* offsetptr;
			Vector3f cameraPosition;
			Camera* camera;
			void callBack();
			vector<callback_function>* callBacks;
	};
}
#endif
