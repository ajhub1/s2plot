#ifndef RPO
#define RPO	

namespace s2plot{

class PrimitiveFacet;
class RenderablePolyObject: public RenderableObject
{
	public:
		template <typename T> PrimitiveFacet** getFacets();
};

}
#endif
