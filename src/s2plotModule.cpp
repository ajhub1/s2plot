#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

///////////////////////////////////////////////////////////////////////////////////////////////////
// Python wrapper code.
#ifdef OMEGA_USE_PYTHON
#include "omega/PythonInterpreterWrapper.h"
BOOST_PYTHON_MODULE(s2plotModule)
{
	// methods to make accessable through the python interface
	PYAPI_REF_BASE_CLASS(s2plotModule)
		PYAPI_STATIC_REF_GETTER(s2plotModule, createAndInitialize)
		;
}
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////
s2plotModule* s2plotModule::createAndInitialize()
{
	s2plotModule* instance = new s2plotModule();
	ModuleServices::addModule(instance);
	instance->doInitialize(Engine::instance());
	return instance;
}

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
	getEngine()->removeRenderPass("s2plotRenderPass");
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
