#ifndef PRIMITIVEFACET
#define PRIMITIVEFACET	

namespace s2plot{

class Vertex;

class PrimitiveFacet: public RenderableObject
{
	public:
		template <typename T> Vertex** getFacets();
		virtual void draw() = 0;
};

}

#endif
