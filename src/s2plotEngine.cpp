#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;


s2plotEngine::s2plotEngine(): EngineModule("s2plotModule")
{
	
}

s2plotEngine::~s2plotEngine()
{
	
}

virtual void initializeRenderer(Renderer* r) 
{ 
	r->addRenderPass(new s2plotRenderPass(r), true);
}

void s2plotModule::dispose()
{
    getEngine()->removeRenderPass("s2plotRenderPass");
}
