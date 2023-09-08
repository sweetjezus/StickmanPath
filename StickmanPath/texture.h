#pragma once
#include <string>
using namespace std;
// implementaçao de texturas: https://www.youtube.com/watch?v=n4k7ANAFsIQ&t=563s 



class Texture
{
private:
	unsigned int m_RendererID;
	string m_FilePath;
	unsigned char* m_LocalBuffer;
	int m_Width, m_Height, m_BPP;
public:
	Texture(const string& path);
	
	void Bind() const;
	void Unbind();
};