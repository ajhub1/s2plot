#include <stdio.h>
#include <omega.h>
#include <omegaGl.h>

namespace s2plot 
{
	using namespace omega;
	
	class s2plotModule
	{
		public:
			int printfred();
			s2plotModule();
			~s2plotModule();
			int run(int argc, char** argv);
	};
}
