#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotModule
	{
		public:
			s2plotModule();
			virtual ~s2plotModule();
			void initialize();
			s2plotModule* createAndInitialize();
			void update(const UpdateContext& context);	
			void s2plotDraw();		
	};
}
