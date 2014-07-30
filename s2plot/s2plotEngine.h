#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotEngine: EngineModule("s2plotModule")
	{
		public:
			s2plotEngine();
			~s2plotEngine();
			virtual void initializeRenderer(Renderer* r);
			void dispose();
	};
}
