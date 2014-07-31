#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

s2plotRenderPass::s2plotRenderPass(Renderer* client): RenderPass(client, "s2plotRenderPass")
{
	
}

void s2plotRenderPass::render(Renderer* client, const DrawContext& context)
{
	// render code here
	s2plotDraw ();

}

s2plotRenderPass::~s2plotRenderPass()
{
	
}

void s2plotRenderPass::sets2plotDrawPointer(s2plotModule::callback_function drawFunction)
{
	s2plotDraw = drawFunction;
}
