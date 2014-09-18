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

using namespace s2plot;
using namespace omega;
using namespace glm;

s2plotFactory::s2plotFactory(s2plotModule* mod)
{
	s2plotModule* module = mod;
	*offsetptr = 0;
	//printf("\n factory created\n");
}

s2plotFactory::~s2plotFactory()
{

}

int s2plotFactory::createProgram()
{
	return 1; // TODO
}



int s2plotFactory::ns2sphere()
{
	return 1; // TODO implement s2plot 
}

/*
 * calculate the centroid of the cube.
 * the old S2PLOT API uses two XYZ structs, we calculate centroid based on
 * these x, y, z points. we pass 1.0f as the w value.
 */
s2plotRenderableCube* s2plotFactory::ns2scube(float x1, float y1, float z1, float x2, 
										float y2, float z2, float red, 
										float green, float blue, float alpha)
{	
	GLfloat size = fabs(x1 - x2);
	vec4 centroid = vec4((x1 + (0.5 * x2)), (y1 + (0.5 * y2)), 
					(z1 + (0.5 * z2)), 1.0f);
	return (s2plotRenderableCube*) module->addObject(new s2plotRenderableCube(offsetptr, size, centroid));
}

