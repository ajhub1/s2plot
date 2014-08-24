#include <omega.h>
#include <s2plot/s2plot.h>

using namespace omega;
using namespace s2plot;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The following is an additional custom render pass if the user requires to add some openGL outside of s2plot
class s2plotAppRenderPass: public RenderPass
    {
    public:
        s2plotAppRenderPass(Renderer* client): RenderPass(client, "s2plotAppRenderPass") 
        {}

        virtual void render(Renderer* client, const DrawContext& context)
        {  
          //printf("\n render was here!\n");
				  s2plotProgram* s2prog = new s2plotProgram();
					  
			GLfloat sampleTriangle[] = {			//remember specify coordinates anti clockwise ->normal openGL convention
				1.0f, 0.0f, 0.0f, 1.0f, //1
				1.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				0.0f, 1.0f, 0.0f, 1.0f, //3
				0.0f, 1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				-1.0f, 0.0f, 0.0f, 1.0f, //2
				0.0f, 0.0f, 1.0f, 0.0f,
				0.0f, 0.0f, 0.0f, 0.0f,
				
				//0.0f, 0.0f, 1.0f, 1.0f, //4
				//0.0f, 0.0f, 1.0f, 0.0f,
				//0.0f, 0.0f, 0.0f, 0.0f,
			};
				
			GLuint sampleVBO;	//remember unsigne int here
			glGenBuffers(1, &sampleVBO);		//1 = number of vbos to make
			glBindBuffer(GL_ARRAY_BUFFER, sampleVBO);
			glBufferData(GL_ARRAY_BUFFER, sizeof(sampleTriangle), sampleTriangle, GL_STATIC_DRAW);
			GLsizei sizeOfVector4InBytes = sizeof(GLfloat) * 12;
			
			//GLushort indices[] = { 1,2,3, 4,3,2};
			//GLuint indexBufferID;
			//glGenBuffers(1, &indexBufferID);
			//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferID);
			//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
			
				
			glEnableVertexAttribArray(0);
			glEnableVertexAttribArray(1);
			//glEnableVertexAttrib(vaIndices::VA_COLOR_INDEX);
			//glEnableVertexAttrib(vaIndices::VA_NORMAL_INDEX);

			glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE,  sizeOfVector4InBytes, 0);
			glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE,  sizeOfVector4InBytes,
								(void*) (sizeof(GLfloat) * 4)) ;
			//glVertexAttributePointer(vaIndices::VA_COLOR_INDEX, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes * 2, sizeOfVector4InBytes * 1);
			//glVertexAttributePointer(vaIndices::VA_NORMAL_INDEX, 4, GL_FLOAT, GL_FALSE, sizeOfVector4InBytes * 2, sizeOfVector4InBytes * 2);


			//GLint posAttrib = glGetAttribLocation(shaderProgram, "position");
			//glVertexAttribPointer(posAttrib, 2, GL_FLOAT, GL_FALSE, 0, 0);
				

				
				
			glUseProgram(s2prog->theProgram);
				
				
				glDrawArrays(GL_TRIANGLES, 0, 3);
				//glDrawElements(GL_TRIANGLES, 4, GL_UNSIGNED_SHORT, 0);
          
        }
    };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// this is the standard way of implementing an s2plot application
class s2plotApp: public EngineModule
{
	public:
	
		void mydraw()
		{
			//draw code goes here
			factory->ns2sphere();
		}
	
	
		s2plotApp()
		{
			mys2plot = new s2plotModule();
			ModuleServices::addModule(mys2plot);
			factory = mys2plot->createFactory();
			mydraw();
		}
	
		virtual void initializeRenderer(Renderer* r) 
        { 
            r->addRenderPass(new s2plotAppRenderPass(r));
        }
	
	private:
		s2plotModule* mys2plot;
		s2plotFactory* factory;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	Application<s2plotApp> app("s2plotApp");
	return omain(app, argc, argv);
}
