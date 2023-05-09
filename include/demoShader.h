#pragma once
#include <glad/glad.h>

struct Shader
{
	GLuint id = 0;

	bool loadShaderProgramFromData(const char *vertexShaderData, const char *fragmentShaderData);
	bool loadShaderProgramFromData(const char *vertexShaderData,
		const char *geometryShaderData, const char *fragmentShaderData);

	bool loadShaderProgramFromFile(const char *vertexShader, const char *fragmentShader);
	bool loadShaderProgramFromFile(const char *vertexShader,
		const char *geometryShader, const char *fragmentShader);

	void bind();

	void clear();

	GLint getUniform(const char *name);
};

GLint getUniform(GLuint shaderId, const char *name);
