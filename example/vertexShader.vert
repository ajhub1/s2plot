#version 110

attribute vec4 position;
attribute vec4 color;
attribute vec4 normal;
varying vec4 outColor;

void main()
{
	gl_Position = gl_ModelViewMatrix * position;
	outColor = color;
}
