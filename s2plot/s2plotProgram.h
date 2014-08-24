#ifndef S2_PLOT_PROGRAM
#define S2_PLOT_PROGRAM

class s2plotProgram
{
		private:
			std::vector<GLuint> shaderList;
			


		public:
		
			GLuint theProgram;
			s2plotProgram();
			
			void s2plotProgramInit(std::string strVertexShader, std::string strFragmentShader);
			
			GLuint CreateShader(GLenum eShaderType, const std::string &strShaderFile);
			GLuint CreateProgram(const std::vector<GLuint> &shaderList);
			
			//~s2plotProgram();
};


#endif //S2_PLOT_PROGRAM
