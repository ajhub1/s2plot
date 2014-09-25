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
 * s2Vertex.h
 * 
 ******************************************************************************/
#ifndef S2VERTEX_H
#define S2VERTEX_H

#include "s2plot/s2plot.h"

namespace s2plot
{
	using namespace omega;
	using namespace glm;	
	using namespace std;
	
	class s2Primitive;
  
	  class s2Vertex : public s2Primitive
	  {
		  public:
			// empty constructor invoked when creating the arrays in the module
			s2Vertex(); 
			
			// when acting as facet
			s2Vertex(GLuint* offsetptr, GLfloat x, GLfloat y, GLfloat z, 
						GLfloat w); 
						
			// when acting as vertex
			s2Vertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w); 
			
			// destructor
			~s2Vertex();
			
			// copy constructor
			//s2Vertex(const s2Vertex& that);
			
			// copy assignment operator
			//s2Vertex& operator=(const s2Vertex& that);
			
			// setters
			void setPosition(vec4* position);
			void setColour(vec4* colour);
			void setNormal(vec4* normal);
			
			// getters
			vec4* getPosition();
			vec4* getColour();
			vec4* getNormal();
			
			GLfloat getDistance(Vector3f cameraPosition);
			void draw();
			vector<GLuint>* getIndices();
			vector<GLfloat>* getVertexData();
			vector<s2Vertex*>* getVertices();
			vector<s2Primitive*>* getPrimitives();
			
		  private:
			// vertex attributes
			vec4* position;
			vec4* colour;
			vec4* normal;

			void initialise(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	  };
}

#endif
