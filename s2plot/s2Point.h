#include <omega.h>
#include <omegaGl.h>

namespace s2plot
{
  using namespace omega;
  
  class s2plotPoint
  {
  public:
    float x;
    float y;
    float z;
    int color;
    s2plotPoint(float, float, float);
	void renderingFunction(void (*fp)());
  };
}
