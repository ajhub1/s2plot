#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

s2plotRenderPass::s2plotRenderPass(Renderer* client): RenderPass(client, "s2plotRenderPass")
{
	
}

void s2plotRenderPass::render(Renderer* client, const DrawContext& context)
{
	// render code here
	
	printf("\nFreddie was here!\n");
}

~s2plotRenderPass()
{
	
}
