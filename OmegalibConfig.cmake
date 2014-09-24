# the following sets the s2plot library referance

set(OMEGA_OS_LINUX 1)

if(OMEGA_OS_WIN)
    set(s2plot_LIB 
        optimized ${OMEGA_LIB_DIR_RELEASE}/s2plot.lib
        debug ${OMEGA_LIB_DIR_DEBUG}/s2plot.lib)
elseif(OMEGA_OS_LINUX)
    set(s2plot_LIB ${OMEGA_BINARY_DIR}/bin/s2plot.so)
elseif(OMEGA_OS_OSX)
    set(s2plot_LIB ${OMEGA_BINARY_DIR}/bin/s2plot.dylib)
endif()
