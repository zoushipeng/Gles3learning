//
// Created by dell on 2020/9/9.
//

#ifndef GLES3LEARNING_TRIANGLESAMPLE_H
#define GLES3LEARNING_TRIANGLESAMPLE_H

#include <GLES3/gl3.h>

class TriangleSample
{
public:
	TriangleSample();

	~TriangleSample();

	void Init();
	void Draw();

private:
    GLuint m_VertexShader;
    GLuint m_FragmentShader;
    GLuint m_ProgramObj;
    int m_SurfaceWidth;
    int m_SurfaceHeight;
};

#endif //GLES3LEARNING_TRIANGLESAMPLE_H
