#include <stdio.h>
#include <iostream>
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotRenderablePolyObject: public s2plotRenderableObject
  {
  protected:
    int* points;
  public:
    //virtual void addPoint(s2plotPoint point);
    //virtual void removePoint(s2plotPoint point);
    virtual void addPoint();
    virtual void removePoint();
  };
}
