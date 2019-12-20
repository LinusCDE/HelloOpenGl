#pragma once

#ifdef LINUX
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

#ifdef WINDOWS
#include "GLEW/glew.h"
#include "GLFW/glfw3.h"
#endif

class VertexBufferObject
{
public:
	VertexBufferObject();
	~VertexBufferObject();

	void Bind() const;
	void Unbind() const;
	void BufferData(GLenum bufferType, GLsizeiptr bufferSize, const void* bufferData, GLenum drawMode);

private:
	unsigned int m_vbo;
};