#ifndef S2PLOTRENDERABLEPOLYOBJECT_H
#define S2PLOTRENDERABLEPOLYOBJECT_H	

#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotRenderablePolyObject: public s2plotRenderableObject
  {
  public:
	//virtual s2plotTriangle** s2plotRenderableCube::getFacets() = 0;
  };
}

#endif
