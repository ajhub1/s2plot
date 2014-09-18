#ifndef S2PLOTPRIMITIVEFACET_H
#define S2PLOTPRIMITIVEFACET_H

#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotPrimitiveFacet: public s2plotGeom
  {
  public:
	virtual s2plotVertex** getVertices()  = 0;
	virtual GLuint* getIndices() = 0;
    virtual void draw() = 0;
    virtual GLfloat getDistance(Vector3f cameraPosition) = 0;
 };
}
#endif
