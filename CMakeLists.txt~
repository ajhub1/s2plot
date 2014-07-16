add_subdirectory(src)

set_target_properties(s2plot PROPERTIES FOLDER modules)

# the following is to link the s2plot library for externally built applications

# Determine the OS.
if(CMAKE_GENERATOR STREQUAL "Visual Studio 9 2008")
	set(OMEGA_OS_WIN 1)
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 9 2008 Win64")
	set(OMEGA_OS_WIN 1)
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 10" OR CMAKE_GENERATOR STREQUAL "Visual Studio 10 2010")
	set(OMEGA_OS_WIN 1)	
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 10 Win64" OR CMAKE_GENERATOR STREQUAL "Visual Studio 10 2010 Win64")
	set(OMEGA_OS_WIN 1)
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 11" OR CMAKE_GENERATOR STREQUAL "Visual Studio 11 2012")
	set(OMEGA_OS_WIN 1)	
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 11 Win64" OR CMAKE_GENERATOR STREQUAL "Visual Studio 10 2012 Win64")
	set(OMEGA_OS_WIN 1)
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 12" OR CMAKE_GENERATOR STREQUAL "Visual Studio 12 2013")
	set(OMEGA_OS_WIN 1)	
elseif(CMAKE_GENERATOR STREQUAL "Visual Studio 12 Win64" OR CMAKE_GENERATOR STREQUAL "Visual Studio 12 2013 Win64")
	set(OMEGA_OS_WIN 1)	
elseif(CMAKE_GENERATOR STREQUAL "Unix Makefiles")
	if(APPLE)
		set(OMEGA_OS_OSX 1)
	else(APPLE)
		set(OMEGA_OS_LINUX 1)
	endif()
elseif(CMAKE_GENERATOR STREQUAL "Xcode")
	set(OMEGA_OS_OSX 1)
endif(CMAKE_GENERATOR STREQUAL "Visual Studio 9 2008")

# set output variable for OS
if(OMEGA_OS_WIN)
	set(OUTPUT "set(OMEGA_OS_WIN 1)

")
elseif(OMEGA_OS_LINUX)
	set(OUTPUT "set(OMEGA_OS_LINUX 1)

")
elseif(OMEGA_OS_OSX)
	set(OUTPUT "set(OMEGA_OS_OSX 1)

")
endif()

# make a comment
set(COMMENT "# the following sets the s2plot library referance

")
file(APPEND ${CMAKE_BINARY_DIR}/OmegalibConfig.cmake ${COMMENT})

# append OS variable for use in the if block
file(APPEND ${CMAKE_BINARY_DIR}/OmegalibConfig.cmake ${OUTPUT})

# replace template with s2plot and append
file(READ ${CMAKE_SOURCE_DIR}/CMakeModules/ModuleConfig.cmake.in SECTION_CONTENT_TEMPLATE)
string(REPLACE "@MODULE_LIB_NAME@" "s2plot" SECTION_CONTENT ${SECTION_CONTENT_TEMPLATE})
file(APPEND ${CMAKE_BINARY_DIR}/OmegalibConfig.cmake ${SECTION_CONTENT})
