
#ifndef S2PLOTRENDERABLEOBJECT_H
#define S2PLOTRENDERABLEOBJECT_H

#include <stdio.h>
#include <iostream>
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotRenderableObject
  {   
	  public:
		int id;
		enum render_type {SHADED = 0, WIRE_FRAME = 1};
		bool isVisible;
  };
}
#endif
