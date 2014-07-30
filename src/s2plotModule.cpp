#include "s2plot/s2plot.h"

using namespace s2plot;
using namespace omega;

s2plotModule::s2plotModule()
{
	
}

s2plotModule::~s2plotModule()
{
	
}

void s2plotModule::s2plotShutdown()
{
	//need to dispose of controller and all objects here
}

int s2plotModule::run(int argc, char** argv)
{
	Application<s2plotEngine> app("s2plot");
    int exitStatus = omain(app, argc, argv);
    s2plotShutdown();
    return exitStatus;
}
