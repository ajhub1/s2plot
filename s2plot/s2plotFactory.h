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
 * s2plotFactory
 * 
 ******************************************************************************/

#ifndef S2PLOTFACTORY_H
#define S2PLOTFACTORY_H

#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"
#include <cmath>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotFactory
	{
		public:
			s2plotFactory(s2plotModule* mod);
			virtual ~s2plotFactory();
			int createProgram();
			
			int ns2sphere();
			s2plotRenderableCube* ns2scube(float x1, float y1, float z1, float x2, 
										float y2, float z2, float red, 
										float green, float blue, float alpha);
										
			//TODO temp
			enum vaIndices{
				VA_POSITION_INDEX,
				VA_COLOR_INDEX,
				VA_NORMAL_INDEX,
				VA_TEXTURE_INDEX,
			};
			
		private:
			s2plotModule* module;
		
			
	};
}
#endif
