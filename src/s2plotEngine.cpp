#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;


s2plotEngine::s2plotEngine(): EngineModule("s2plot")
{
	
}

s2plotEngine::~s2plotEngine()
{
	
}

void s2plotEngine::initializeRenderer(Renderer* r) 
{ 
	r->addRenderPass(new s2plotRenderPass(r));
}

void s2plotEngine::dispose()
{
    getEngine()->removeRenderPass("s2plotRenderPass");
}
