#include "s2plot/s2plot.h"
#include <omegaGl.h>
#include <omega.h>

using namespace s2plot;
using namespace omega;


s2plotRenderableCube::s2plotRenderableCube(float x, float y, float z, int numPoints, int render_type, float mySize)
{
  id = 0; // should auto generates
  x = x;
  y = y;
  z = z;
  render_type = render_type; // 0 = shaded
  points = new int[numPoints];
  size = mySize;
}

// ================================================
// ====== RenderableObject function declarations 
// ================================================
void s2plotRenderableCube::draw()
{
	std::cout << "blah" << size;
	glEnable(GL_DEPTH_TEST);
	if(oglError) return;
	glEnable(GL_LIGHTING);
	if(oglError) return;
	// Setup light.
	glEnable(GL_LIGHT0);
	if(oglError) return;
	glEnable(GL_COLOR_MATERIAL);
	if(oglError) return;
	glLightfv(GL_LIGHT0, GL_DIFFUSE, Color(1.0, 1.0, 1.0).data());
	if(oglError) return;
	glLightfv(GL_LIGHT0, GL_POSITION, Vector3s(0.0f, 0.0f, 1.0f).data());
	if(oglError) return;

	// Draw a rotating cube.
	glTranslatef(0, 2, -2); 
	glRotatef(10, 1, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
	glBegin(GL_QUADS);
	 
	glVertex3f(size,size,size);
	glVertex3f(-size,size,size);
	glVertex3f(-size,-size,size);
	glVertex3f(size,-size,size);
	 
	glVertex3f(size,size,-size);
	glVertex3f(-size,size,-size);
	glVertex3f(-size,-size,-size);
	glVertex3f(size,-size,-size);
	 
	glVertex3f(size,size,size);
	glVertex3f(size,-size,size);
	glVertex3f(size,-size,-size);
	glVertex3f(size,size,-size);
	 
	glVertex3f(-size,size,size);
	glVertex3f(-size,-size,size);
	glVertex3f(-size,-size,-size);
	glVertex3f(-size,size,-size);
	 
	glVertex3f(size,size,size);
	glVertex3f(-size,size,size);
	glVertex3f(-size,size,-size);
	glVertex3f(size,size,-size);
	 
	glVertex3f(size,-size,size);
	glVertex3f(-size,-size,size);
	glVertex3f(-size,-size,-size);
	glVertex3f(size,-size,-size);

	glEnd();
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
