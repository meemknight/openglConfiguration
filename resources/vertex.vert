#version 330 core

layout (location = 0) in vec3 p;

void main()
{
	
	gl_Position = vec4(p, 1);

}