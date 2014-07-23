#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotModule: Public EngineModule
	{
		public:
			int printfred();
			s2plotModule();
			virtual ~s2plotModule();
			virtual void dispose();
			virtual void initialize();
			virtual void initializeRenderer(Renderer* r);
			
	};
}
