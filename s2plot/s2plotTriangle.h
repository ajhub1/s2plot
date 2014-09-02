#ifndef S2PLOTTRIANGLE_H
#define S2PLOTTRIANGLE_H
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

#define NUMBER_OF_VERTICES_PER_TRIANGLE 3

namespace s2plot
{
  using namespace omega;
  
  class s2plotTriangle: public s2plotPrimitiveFacet
  {
	  public:
		
		s2plotVertex vertices[];
	  
		s2plotTriangle(); //TODO any future use? 
		s2plotTriangle(s2plotVertex p0, s2plotVertex p1, s2plotVertex p2);
		void draw();
		GLfloat getDistance();
		GLfloat* getVertexData();
	  
	  private:
		//const int numVertices;
  };
 
}
#endif
