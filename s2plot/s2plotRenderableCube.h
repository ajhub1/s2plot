#ifndef S2PLOTRENDERABLECUBE_H
#define S2PLOTRENDERABLECUBE_H	
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

#define NUMBER_OF_FACETS 12

namespace s2plot
{
  using namespace omega;

  
  class s2plotRenderableCube: public s2plotRenderablePolyObject
  {
  public:
	s2plotRenderableCube();
    s2plotTriangle** getFacets();
    GLfloat* getVertexData();
    GLuint** getVertexIndices();
    
  private:
    void init();
    s2plotTriangle* facets[];
  };
}

#endif
