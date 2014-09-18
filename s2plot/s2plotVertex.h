#ifndef S2PLOTVERTEX_H
#define S2PLOTTVERTEX_H
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

namespace s2plot
{
	using namespace omega;
	using namespace glm;	
	
	class s2plotPrimitiveFacet;
  
	  class s2plotVertex : public s2plotPrimitiveFacet
	  {
		  public:
			s2plotVertex(); // empty constructor invoced when creating the arrays in the module
			s2plotVertex(GLuint* offsetptr, GLfloat x, GLfloat y, GLfloat z, GLfloat w); // when acting as facet
			s2plotVertex(GLfloat x, GLfloat y, GLfloat z, GLfloat w); // when acting as vertex
			s2plotVertex(const s2plotVertex& that);
			~s2plotVertex();
			s2plotVertex& operator=(const s2plotVertex& that);

			void setPosition(vec4* position);
			void setColour(vec4* colour);
			void setNormal(vec4* normal);
			
			vec4* getPosition();
			vec4* getColour();
			vec4* getNormal();
			
			s2plotPrimitiveFacet** getFacets();
			s2plotVertex** getVertices();
			GLfloat* getVerticesData();
			GLuint* getIndices();
			void draw();
			GLfloat getDistance(Vector3f cameraPosition);	
			
		  private:
			s2plotVertex** vertices; // represents facet of this vertex
			GLfloat vertexData[12]; //TODO MAGIC represents data of THIS vertex 
			GLuint* indexArray; // store the index
			vec4* position;
			vec4* colour;
			vec4* normal;
			GLuint offset;
	  };
}

#endif

