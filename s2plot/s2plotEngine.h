#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotEngine: public EngineModule
	{
		public:
			s2plotEngine();
			virtual ~s2plotEngine();
			virtual void initializeRenderer(Renderer* r);
			void dispose();
			void sets2plotDrawPointer();
			void render();
			
		private:
			s2plotRenderPass* renderpass;
			s2plotModule::callback_function s2plotDraw;
	};
}
