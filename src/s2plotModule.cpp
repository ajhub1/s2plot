#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

int s2plotModule::printfred()
{
	printf("\nFreddie was here!\n");
	return 0;
}

s2plotModule::s2plotModule(): EngineModule("s2plotModule")
{
	
}

s2plotModule::~s2plotModule()
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
