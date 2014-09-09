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
    virtual void draw(const GLfloat* indices)=0;
    virtual GLfloat getDistance(Vector3f cameraPosition)=0;
	virtual void setBaseOffset(GLuint baseOffset) =0;
	virtual s2plotVertex* dummy() = 0;
 };
}
#endif
