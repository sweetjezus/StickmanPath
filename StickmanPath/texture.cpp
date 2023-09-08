#include "texture.h"
#include <GL/glut.h>

Texture::Texture(const string& path)
	: m_RendererID(0), m_FilePath(path), m_LocalBuffer(nullptr),
	m_Width(0), m_Height(0), m_BPP(0)
{
	GLCall(glGenTextures(1, &m_RendererID));
}

void Texture::Bind() const
{
}

void Texture::Unbind()
{
}
