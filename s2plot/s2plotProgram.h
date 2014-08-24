#ifndef S2_PLOT_PROGRAM
#define S2_PLOT_PROGRAM

using namespace omega;
using namespace s2plot;

class s2plotProgram
{
		public:
		
			GLuint theProgram;
			s2plotProgram();
			
			void s2plotProgramInit(std::string strVertexShader, std::string strFragmentShader);
			
			GLuint CreateShader(GLenum eShaderType, const std::string &strShaderFile);
			GLuint CreateProgram(const std::vector<GLuint> &shaderList);
			
			//~s2plotProgram();
		private:
			std::vector<GLuint> shaderList;
			std::string strvs;	//stores text file
			std::string strfs;
};


#endif //S2_PLOT_PROGRAM
