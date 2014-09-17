#ifndef S2PLOTRENDERABLECUBE_H
#define S2PLOTRENDERABLECUBE_H	
#include <omega.h>
#include <omegaGl.h>
#include "s2plot/s2plot.h"

#define NUMBER_OF_FACETS 12
#define NUMBER_OF_INDICES 12 * 3 //NUMBER_OF_FACETS * VERTEX PER FACET, formula holds only if primitive is composed of same type of facets

namespace s2plot
{
  using namespace omega;

  
  class s2plotRenderableCube: public s2plotRenderablePolyObject
  {
  public:
	s2plotRenderableCube(GLuint baseOffset, GLfloat size, glm::vec4 position);
	s2plotRenderableCube(const s2plotRenderableCube& that);
	s2plotRenderableCube& operator=(const s2plotRenderableCube& that);
	~s2plotRenderableCube();
	
	void updateFacetOffsets(GLuint baseOffset);
    std::vector<s2plotPrimitiveFacet*>* getFacets();
    std::vector<GLuint>* getVertexIndices();
    int getTestPrint();
    
  private:
    void init(GLuint baseOffset);
    std::vector<s2plotPrimitiveFacet*>* facets;
    std::vector<GLuint>* indices;
    s2plotVertex* vertices[8];				//TODO MAGIC
    GLuint baseOffset;
  };
}

#endif
