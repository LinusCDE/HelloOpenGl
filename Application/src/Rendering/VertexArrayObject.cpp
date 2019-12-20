#include "VertexArrayObject.h"

#ifdef LINUX
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

#ifdef WINDOWS
#include "GLEW/glew.h"
#include "GLFW/glfw3.h"
#endif

#include "Vertex.h"

VertexArrayObject::VertexArrayObject()
{
	glGenVertexArrays(1, &m_vao);
}

VertexArrayObject::~VertexArrayObject()
{
	glDeleteVertexArrays(1, &m_vao);
}

void VertexArrayObject::Bind() const
{
	glBindVertexArray(m_vao);
}

void VertexArrayObject::Unbind() const
{
	glBindVertexArray(0);
}

void VertexArrayObject::SetupAttribPointers()
{
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (const void*)offsetof(Vertex, Position));

	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(Vertex), (const void*)offsetof(Vertex, Color));
}
