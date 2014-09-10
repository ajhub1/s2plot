# Set the module name here
        SET(MODULE_NAME s2plot)

        # Set module name and source files here
        add_library(${MODULE_NAME} MODULE 
		s2plotFactory.cpp
		s2plotRenderableObject.cpp
		s2plotPoint.cpp
		s2plotRenderableCube.cpp
		s2plotModule.cpp
		s2plotRenderPass.cpp
                s2plotProgram.cpp
                s2plotShader.cpp
                s2plotTriangle.cpp
                s2plotPrimitiveFacet.cpp
                s2plotRenderablePolyObject.cpp
                s2plotTransform.cpp
                s2plotVertex.cpp
		)

        # Set the module library dependencies here
        target_link_libraries(${MODULE_NAME}
                omega)

        #------------------------------------------------------------------------------
        # DO NOT MODIFY ANYTHING BELOW AFTER THIS LINE
        set_target_properties(${MODULE_NAME} PROPERTIES PREFIX "")
        if(WIN32)
                set_target_properties(${MODULE_NAME} PROPERTIES FOLDER modules SUFFIX ".pyd")
        endif()
