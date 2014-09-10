#include <omega.h>
#include <s2plot/s2plot.h>

using namespace omega;
using namespace s2plot;

////////////////////////////////////////////////////////////////////////////////
// this is the standard way of implementing an s2plot application
class s2plotApp: public EngineModule
{
	public:
	
		void mydraw()
		{
			//draw code goes here
			glm::vec4 pos(0.0f,0.0f,0.0f,0.0f);
			factory->ns2scube(0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f, 1.0f, 1.0f,  1.0f, 1.0f);
		}
	
	
		s2plotApp()
		{
			mys2plot = new s2plotModule();
			ModuleServices::addModule(mys2plot);
			factory = mys2plot->createFactory();
			mydraw();
		}
	
	private:
		s2plotModule* mys2plot;
		s2plotFactory* factory;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	Application<s2plotApp> app("s2plotApp");
	return omain(app, argc, argv);
}