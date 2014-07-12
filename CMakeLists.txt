add_subdirectory(src)

set_target_properties(s2plot PROPERTIES FOLDER modules)

file(READ ModuleConfig.cmake.in SECTION_CONTENT_TEMPLATE)
string(REPLACE "@MODULE_LIB_NAME@" "s2plot" SECTION_CONTENT ${SECTION_CONTENT_TEMPLATE})
file(APPEND ${CMAKE_BINARY_DIR}/OmegalibConfig.cmake ${SECTION_CONTENT})

#export_module_library(s2plot)
