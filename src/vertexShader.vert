#version 430

in layout(location=0) vec4 position;



void main()
{
	gl_Position = vec4(position);

}
