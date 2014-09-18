#ifndef S2PLOTTRIANGLE_H
#define S2PLOTTRIANGLE_H
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

#define NUMBER_OF_VERTICES_PER_TRIANGLE 3 // TODO change to a constant

namespace s2plot
{
  using namespace omega;
  
  class s2plotTriangle: public s2plotPrimitiveFacet
  {
	  public:
		s2plotTriangle(GLuint* offset, s2plotVertex* p0, s2plotVertex* p1, s2plotVertex* p2);
		s2plotTriangle(const s2plotTriangle& that);
		s2plotTriangle& operator=(const s2plotTriangle& that);
		~s2plotTriangle();
		
		s2plotPrimitiveFacet** getFacets(); // returns vertices NOT facets
		s2plotVertex** getVertices();
		GLuint* getIndices();
		void draw();
		GLfloat getDistance(Vector3f cameraPosition);	// TODO using omegalib vector
		
	  private:
		s2plotVertex* vertices[NUMBER_OF_VERTICES_PER_TRIANGLE];
		GLuint offset;
		GLuint indices[NUMBER_OF_VERTICES_PER_TRIANGLE];
  };
 
}
#endif
