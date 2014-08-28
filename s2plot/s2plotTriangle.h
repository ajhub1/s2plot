#ifndef S2PLOTTRIANGLE_H
#define S2PLOTTRIANGLE_H
#include <stdio.h>
#include <iostream>
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"


namespace s2plot
{
  using namespace omega;
  
  class s2plotTriangle: public s2plotPrimitiveFacet
  {
	  public:
	  
		//glm::vec4 positions;
		//glm::vec4 colour;
		//glm::vec4 normals;
	  
		s2plotTriangle();
		void draw();
  };
 
}
#endif
