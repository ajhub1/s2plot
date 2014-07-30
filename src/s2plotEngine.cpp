#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;


s2plotEngine::s2plotEngine()
{
	
}

s2plotEngine::~s2plotEngine()
{
	
}

virtual void s2plotEngine::initializeRenderer(Renderer* r) 
{ 
	r->addRenderPass(new s2plotRenderPass(r), true);
}

void s2plotEngine::dispose()
{
    getEngine()->removeRenderPass("s2plotRenderPass");
}
