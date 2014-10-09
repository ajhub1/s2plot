#version 110

attribute vec4 position;
varying vec4 outColor;

void main()
{
	gl_Position = gl_Vertex * gl_ModelViewMatrix;
	gl_FrontColor = gl_Color;
	outColor = position;

}
