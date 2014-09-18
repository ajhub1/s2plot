#ifndef VERTEX
#define VERTEX	
namespace s2plot{
	
class Vertex: public PrimitiveFacet
{
	public:
		Vertex();
		void draw();
		
		//template <typename T> Vertex** getFacets();
		template <typename T> Vertex** getFacets(){
			Vertex** a;
			printf("vertex getFacets \n");
			return a;
		}

};

}
#endif
