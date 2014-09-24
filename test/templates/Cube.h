#ifndef CUBE
#define CUBE	
namespace s2plot{

class PrimitiveFacet;
class Cube: public RenderablePolyObject
{
	public:
		Cube();
		//template <typename T> PrimitiveFacet** getFacets();
		
		template <typename T> PrimitiveFacet** getFacets(){
			PrimitiveFacet** a;
			printf("cube getFacets \n");
			return a;
		}
};

}

#endif
