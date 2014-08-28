#include "s2plot/s2plot.h"
#include <omegaGl.h>
#include <omega.h>

using namespace s2plot;
using namespace omega;
using namespace glm;

s2plotRenderableCube::s2plotRenderableCube()
{
	printf("\n s2cube\n");
	s2plotTriangle* facets[12];
	
	//vertices
	vec4 p0(0.0f,0.0f,0.0f,0.0f);
	vec4 p1(0.0f,1.0f,0.0f,0.0f);
	vec4 p2(1.0f,0.0f,0.0f,0.0f);
	vec4 p3(1.0f,1.0f,0.0f,0.0f);
	
	vec4 p4(0.0f,0.0f,1.0f,0.0f);
	vec4 p5(0.0f,1.0f,1.0f,0.0f);
	vec4 p6(1.0f,0.0f,1.0f,0.0f);
	vec4 p7(1.0f,1.0f,1.0f,0.0f);

	//front face
	facets[0] = new s2plotTriangle(p0,p1,p2);
	facets[1] = new s2plotTriangle(p1,p2,p3);
	
	//right face
	facets[2] = new s2plotTriangle(p2,p5,p3);
	facets[3] = new s2plotTriangle(p3,p5,p7);
	
	//back face
	facets[4] = new s2plotTriangle(p5,p4,p7);
	facets[5] = new s2plotTriangle(p7,p4,p6);
	
	//left face
	facets[6] = new s2plotTriangle(p4,p0,p6);
	facets[7] = new s2plotTriangle(p6,p0,p1);
	
	//top face
	facets[8] = new s2plotTriangle(p1,p6,p7);
	facets[9] = new s2plotTriangle(p1,p3,p7);
	
	//bottom face
	facets[10] = new s2plotTriangle(p0,p4,p5);
	facets[11] = new s2plotTriangle(p5,p0,p2);
}

// ================================================
// ====== RenderableObject function declarations 
// ================================================
void s2plotRenderableCube::draw()
{

}

void s2plotRenderableObject::registerDrawFunction(void (*fp)())
{
  std:cout << "Hello from registerDrawFunction";
  
}

// ================================================
// ====== RenderablePolyObject function declarations 
// ================================================
void s2plotRenderablePolyObject::addPoint()
{
  std:cout << "Hello from addPoints";
}

void s2plotRenderablePolyObject::removePoint()
{
  std:cout << "Hello from removePoint";
}
