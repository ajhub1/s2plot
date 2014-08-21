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
		float x;
		float y;
		float z;
		enum render_type {SHADED = 0, WIRE_FRAME = 1};
		bool isVisible;
		virtual void registerDrawFunction(void (*fp)());
		virtual void draw() {}
  };
}
