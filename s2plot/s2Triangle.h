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
 * s2Triangle.h
 * 
 ******************************************************************************/
#ifndef S2TRIANGLE_H
#define S2TRIANGLE_H
#include "s2plot/s2plot.h"

namespace s2plot
{
	using namespace omega;
	using namespace std;

	class s2Triangle: public s2Primitive
	{
		public:
			s2Triangle(GLuint* offset, 
						s2Vertex* p0, 
						s2Vertex* p1, 
						s2Vertex* p2,
						triple indices);
						
			s2Triangle(const s2Triangle& that);
			s2Triangle& operator=(const s2Triangle& that);
			~s2Triangle();
		
			typedef struct s_triple
			{
				GLuint v1;
				GLuint v2;
				GLunit v3;
				triple(GLuint v1, GLuint v2, GLuint v3)
				{
					this.v1 = v1;
					this.v2 = v2;
					this.v3 = v3;
				}
			} triple;
			
		private:
			void initialise(s2Vertex* p0, 
							s2Vertex* p1, 
							s2Vertex* p2,
							triple indices);
	};
}

#endif
