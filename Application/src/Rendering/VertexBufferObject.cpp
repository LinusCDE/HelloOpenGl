#include "VertexBufferObject.h"

#ifdef LINUX
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

#ifdef WINDOWS
#include "GLEW/glew.h"
#include "GLFW/glfw3.h"
#endif

VertexBufferObject::VertexBufferObject()
{
	glGenBuffers(1, &m_vbo);	
}

VertexBufferObject::~VertexBufferObject()
{
	glDeleteBuffers(1, &m_vbo);
}

void VertexBufferObject::Bind() const
{
	glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
}

void VertexBufferObject::Unbind() const
{
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void VertexBufferObject::BufferData(GLenum bufferType, GLsizeiptr bufferSize, const void * bufferData, GLenum drawMode)
{
	glBufferData(bufferType, bufferSize, bufferData, drawMode);
}
