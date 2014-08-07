#include <omega.h>
#include <s2plot/s2plot.h>

using namespace omega;
using namespace s2plot;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class s2plotApp: public EngineModule
{
	public:
		s2plotApp()
		{
			mys2plot = new s2plotModule();
			ModuleServices::addModule(mys2plot);
		}
	
	private:
		s2plotModule* mys2plot;
};

int main(int argc, char** argv)
{
	Application<s2plotApp> app("s2plotApp");
	return omain(app, argc, argv);
}
