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
		
		s2plotVertex vertices[]; //TODO make private
		s2plotTriangle(); //TODO any future use? 
		s2plotTriangle(s2plotVertex p0, s2plotVertex p1, s2plotVertex p2);
		void draw();
		GLfloat getDistance();
		GLfloat* getVertexData();
		GLuint* getVertexIndices();
		
	  private:
		//const int numVertices;
		GLfloat vdata[];
  };
 
}
#endif
