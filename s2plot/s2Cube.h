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
 * s2Cube.h
 * 
 ******************************************************************************/
#ifndef S2CUBE_H
#define S2CUBE_H	
#include "s2plot/s2plot.h"

#define NUMBER_OF_FACETS 12
#define NUMBER_OF_INDICES 12 * 3 //NUMBER_OF_FACETS * VERTEX PER FACET, formula holds only if primitive is composed of same type of facets

namespace s2plot
{
	using namespace omega;
	using namespace std;
	using namespace glm;

	class s2Cube: public s2PolyObject
	{
		public:
			s2Cube(GLuint* offsetptr, GLfloat size, vec4 position);
			//s2Cube(const s2Cube& that);
			//s2Cube& operator=(const s2Cube& that);
			~s2Cube();

			vector<s2Primitive*>* getPrimitives();
			void updateFacetOffsets(GLuint baseOffset); // TODO shifaz is a bitch 

		private:
			void initialise(GLuint* offsetptr);
			s2Vertex* vertices[8];		//TODO local because a sphere might use a vector
	};
}

#endif
