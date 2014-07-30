#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotEngine
	{
		public:
			s2plotEngine(): EngineModule("s2plotModule");
			~s2plotEngine();
			virtual void initializeRenderer(Renderer* r);
			void s2plotModule::dispose();
	};
}
