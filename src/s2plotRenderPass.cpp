#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

s2plotRenderPass::s2plotRenderPass(Renderer* client, const String& name): RenderPass(client, name)
{
	
}

void s2plotRenderPass::initialize()
{
	RenderPass::initialize();

    myModule = (s2plotModule*) getUserData();
}

void s2plotRenderPass::render(Renderer* client, const DrawContext& context)
{
	// render code here
	myModule->s2plotDraw();

}

s2plotRenderPass::~s2plotRenderPass()
{
	
}
