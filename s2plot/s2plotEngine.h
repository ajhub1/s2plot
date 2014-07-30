#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotEngine: public EngineModule
	{
		public:
			s2plotEngine(): EngineModule("s2plot");
			~s2plotEngine();
			virtual void initializeRenderer(Renderer* r);
			void dispose();
	};
}
