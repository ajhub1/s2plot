#ifndef TRIANGLE
#define TRIANGLE	
namespace s2plot{
	
class Triangle: public PrimitiveFacet
{
	public:
		Triangle();
		void draw();
		
		//template <typename T> Vertex** getFacets();
		template <typename T> Vertex** getFacets(){
			Vertex** a;
			printf("Triangle getFacets \n");
			return a;
		}

};

}
#endif
