#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

int s2plotModule::printfred()
{
	printf("\nFreddie was here!\n");
	return 0;
}

s2plotModule::s2plotModule()
{
	
}

s2plotModule::~s2plotModule()
{
	
}

int s2plotModule::run(int argc, char** argv)
{
	Application<s2plotEngine> app("s2plot");
    return omain(app, argc, argv);
}
