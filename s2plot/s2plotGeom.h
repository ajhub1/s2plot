#ifndef S2PLOTRENDERABLEOBJECT_H
#define S2PLOTRENDERABLEOBJECT_H
#include "s2plot/s2plot.h"

namespace s2plot
{
  using namespace omega;
	
  class s2plotGeom
  {   
	  public:
		GLuint getId();
		void setId(GLuint newId);
		virtual s2plotPrimitiveFacet** getFacets() = 0;
	  private:
		GLuint id;
  };
}
#endif
