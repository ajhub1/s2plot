#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

///////////////////////////////////////////////////////////////////////////////////////////////////
void s2plotModule::s2plotDraw()
{
	printf("/nFreddie was here!/n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////
s2plotModule::s2plotModule(): EngineModule("s2plotModule")
{
	//create data structure 
}

s2plotModule::~s2plotModule()
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initialize()
{
	// setup the data structures for handling objects internally

	// add custom shaders here
	
	//example
	/* Setup a light for the scene.
	myLight = new Light(mySceneManager);
	myLight->setEnabled(true);
	myLight->setPosition(Vector3f(0, 5, -2));
	myLight->setColor(Color(1.0f, 1.0f, 1.0f));
	myLight->setAmbient(Color(0.1f, 0.1f, 0.1f));
	mySceneManager->setMainLight(myLight);*/
}

///////////////////////////////////////////////////////////////////////////////////////////////////
void s2plotModule::update(const UpdateContext& context)
{
	//update data structure etc here on every frame update
	
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void s2plotModule::initializeRenderer(Renderer* r)
{
    s2plotRenderPass* s2plotrp = new s2plotRenderPass(r, "s2plotRenderPass");
    s2plotrp->setUserData(this);
    r->addRenderPass(s2plotrp);
    myRenderPasses.push_back(s2plotrp);
}
