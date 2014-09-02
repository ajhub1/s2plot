#ifndef S2PLOTVERTEX_H
#define S2PLOTTVERTEX_H
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
	using namespace omega;
	using namespace glm;	
  
	  class s2plotVertex 
	  {
		  public:
			s2plotVertex();
			s2plotVertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
			//~s2plotVertex();
			
			void setPosition(vec4 position);
			void setColour(vec4 colour);
			void setNormal(vec4 normal);
			
			vec4 getPosition();
			vec4 getColour();
			vec4 getNormal();
			
			GLfloat* getVertexData();
			
		  private:
		    glm::vec4 position;
			glm::vec4 colour;
			glm::vec4 normal;
			//glm::vec2 tex; //
	  };
}

#endif

