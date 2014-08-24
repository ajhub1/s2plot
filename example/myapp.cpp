#include <omega.h>
#include <s2plot/s2plot.h>

using namespace omega;
using namespace s2plot;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The following is an additional custom render pass if the user requires to add some openGL outside of s2plot
class s2plotAppRenderPass: public RenderPass
    {
    public:
        s2plotAppRenderPass(Renderer* client): RenderPass(client, "s2plotAppRenderPass") 
        {}

        virtual void render(Renderer* client, const DrawContext& context)
        {  
          printf("\nRoger was here!\n");
        }
    };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// this is the standard way of implementing an s2plot application
class s2plotApp: public EngineModule
{
	public:
	
		void mydraw()
		{
			//draw code goes here
			factory->ns2sphere();
		}
	
	
		s2plotApp()
		{
			mys2plot = new s2plotModule();
			ModuleServices::addModule(mys2plot);
			factory = mys2plot->createFactory();
			mydraw();
		}
	
		virtual void initializeRenderer(Renderer* r) 
        { 
            r->addRenderPass(new s2plotAppRenderPass(r));
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
