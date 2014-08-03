#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;

	class s2plotRenderPass: public RenderPass
	{
		public:
			s2plotRenderPass(Renderer* client);
			virtual ~s2plotRenderPass();
			virtual void render(Renderer* client, const DrawContext& context);	
			void initialize();		
			
		private:
			s2plotModule* myModule;
	};
}
