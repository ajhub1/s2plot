#ifndef S2PLOTPRIMITIVEFACET_H
#define S2PLOTPRIMITIVEFACET_H

#include <stdio.h>
#include <iostream>
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
  
  class s2plotPrimitiveFacet: public s2plotRenderableObject
  {
  public:
    virtual void draw()=0;
    virtual GLfloat getDistance()=0;
 };
}
#endif
