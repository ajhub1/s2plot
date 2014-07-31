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
	renderpass = new s2plotRenderPass(r);
	//s2plotDraw = &s2plotEngine::render;
	//renderpass->sets2plotDrawPointer(s2plotModule::callback_function s2plotDraw)
	r->addRenderPass(renderpass);
}

void s2plotEngine::sets2plotDrawPointer(s2plotModule::callback_function drawFunction)
{
	s2plotDraw = drawFunction;
}

void s2plotEngine::render()
{
	printf("/nfreddie was here!/n");
}

void s2plotEngine::dispose()
{
    getEngine()->removeRenderPass("s2plotRenderPass");
}
