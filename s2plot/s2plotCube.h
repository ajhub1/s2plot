#include <stdio.h>
#include <iostream>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot
{
  using namespace omega;
  
  class s2plotCube: public s2plotRenderablePolyObject
  {
  private:
    float size;
  public:
	void draw();
    s2plotRenderableCube(float, float, float, int, int, float);
  };
}

