s2plot-omegalib
===============

We are implementing the S2PLOT API (function signatures) in the Omegalib framework to allow S2PLOT code to render on the distributed screens of the Monash CAVE2.

Where to start
----------------------------------------------------------------------
- follow the build instructions located in the _HANDOVER folder
- read through the s2plot_module.pdf document while also looking at the communication diagram


Known issues
----------------------------------------------------------------------
- shader bug: when the vertex shader multiplies incoming vertex positions by the ProjectionMatrix the shapes do not render on the screen. If the shader does not multiply by the ProjectionMatrix the shapes render to the screen but they behave like billboards and do not move with user input.


Background
----------------------------------------------------------------------
The Monash CAVE2 (http://monash.edu/cave2) is the largest hybrid 2D / 3D display system of its kind in the world. It boasts 84 million pixels in a cylindrical display measuring approx. 7.5m across and subtending 320 degrees in the horizontal plane. The CAVE2 display is rendered by a 90 teraflop/second compute cluster connected with a 10 Gb/s network fabric.

The main API in the CAVE2 for programming 3D content is the Omegalib framework (https://github.com/uic-evl/omegalib) which provides C++ and Python programming interfaces, uses OpenSceneGraph for importing data, and can be built with partial support for VTK-based applications. Omegalib is high- level, object-oriented code, and importantly supports distributed rendering on clustered display systems such as the CAVE2.

In contrast, S2PLOT (http://astronomy.swin.edu.au/s2plot/index.php?title=S2PLOT) - boasts a simpler functional interface for 3D graphics and can be easily programmed from C (or C++) or FORTRAN.

Project
----------------------------------------------------------------------
This project aims to implement the S2PLOT API in the Omegalib framework so that existing S2PLOT code can be ported easily to clustered display environments including the CAVE2. The project will bring together the complementary advantages of Omegalib (viz. core support for clustered display environments, and for modern shader-based OpenGL rendering) and S2PLOT (viz. simple functions for generating scientific visualisations in 2D [in "screen coordinates"] and 3D, strong support for dynamically updating visualisations; 3D volume rendering; capability to control the visualisation via socket connection(s); and 3D PDF output).
