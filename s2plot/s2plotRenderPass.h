#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;

	class s2plotRenderPass: public RenderPass
	{
		public:
			s2plotRenderPass(Renderer* client): RenderPass(client, "s2plotRenderPass");
			~s2plotRenderPass();
			virtual void render(Renderer* client, const DrawContext& context);			
	};
}
