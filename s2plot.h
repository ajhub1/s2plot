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
 * s2Program.cpp
 * 
 ******************************************************************************/
#ifndef S2PLOT_H
#define S2PLOT_H

//GLM headers - declare at top
#include "s2plot/s2plot/glm/glm.hpp"
#define GLM_FORCE_RADIANS
#include "s2plot/s2plot/glm/gtc/matrix_transform.hpp"

#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>
#include <vector>
#include <utility>
#include <cmath>
#include <omicron.h>
#include <omp.h>
#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>

#include "s2plot/s2plot/s2Module.h"
#include "s2plot/s2plot/s2RenderPass.h"
#include "s2plot/s2plot/s2Geom.h"
#include "s2plot/s2plot/s2PolyObject.h"
#include "s2plot/s2plot/s2Primitive.h"
#include "s2plot/s2plot/s2Vertex.h"
#include "s2plot/s2plot/s2Triangle.h"
#include "s2plot/s2plot/s2Cube.h"
#include "s2plot/s2plot/s2Factory.h"
#include "s2plot/s2plot/s2Program.h"
#include "s2plot/s2plot/s2Shader.h"

#endif
