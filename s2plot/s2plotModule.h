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
			~s2plotModule();
			void s2plotShutdown();
			void initializeController();
			int run(int argc, char** argv);
			void draw();
			typedef void (*callback_function)(void);
			
		private:
				
	};
}
