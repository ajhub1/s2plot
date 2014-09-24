# Set the module name here
        SET(MODULE_NAME s2plot)

        # Set module name and source files here
        add_library(${MODULE_NAME} MODULE 
		s2Factory.cpp
		s2Geom.cpp
		s2Cube.cpp
		s2Module.cpp
		s2RenderPass.cpp
                s2Program.cpp
                s2Shader.cpp
                s2Triangle.cpp
                s2Primitive.cpp
                s2PolyObject.cpp
                s2Vertex.cpp
		)

        # Set the module library dependencies here
        target_link_libraries(${MODULE_NAME}
                omega)

	# Debugging
	set (CMAKE_BUILD_TYPE debug)

        #------------------------------------------------------------------------------
        # DO NOT MODIFY ANYTHING BELOW AFTER THIS LINE
        set_target_properties(${MODULE_NAME} PROPERTIES PREFIX "")
        if(WIN32)
                set_target_properties(${MODULE_NAME} PROPERTIES FOLDER modules SUFFIX ".pyd")
        endif()
