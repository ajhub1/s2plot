#ifndef S2PLOTPRIMITIVEFACET_H
#define S2PLOTPRIMITIVEFACET_H
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotPrimitiveFacet: public s2plotRenderableObject
  {
  public:
	template<typename s2Type> s2plotVertex** getFacets();
	virtual GLuint* getIndices() = 0;
    virtual void draw() = 0;
    virtual GLfloat getDistance(Vector3f cameraPosition) = 0;
 };
}
#endif
