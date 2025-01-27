#pragma once

#ifdef LINUX
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

#ifdef WINDOWS
#include "GLEW/glew.h"
#include "GLFW/glfw3.h"
#endif

class ElementBufferObject
{
public:
	ElementBufferObject();
	~ElementBufferObject();

	void Bind() const;
	void Unbind() const;

	void BufferData(GLenum bufferType, GLsizeiptr bufferSize, const void * bufferData, GLenum drawMode);

	unsigned int GetIndicesCount() const;

private:
	unsigned int m_Ebo;
	unsigned int m_IndicesCount;
};