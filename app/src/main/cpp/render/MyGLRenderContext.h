//
// Created by dell on 2020/9/9.
//

#ifndef GLES3LEARNING_MYGLRENDERCONTEXT_H
#define GLES3LEARNING_MYGLRENDERCONTEXT_H

#include "stdint.h"
#include "../sample/TriangleSample.h"

class MyGLRenderContext
{
	MyGLRenderContext();

	~MyGLRenderContext();

public:
	void SetImageData(int format, int width, int height, uint8_t *pData);

	void OnSurfaceCreated();

	void OnSurfaceChanged(int width, int height);

	void OnDrawFrame();

	static MyGLRenderContext* GetInstance();
	static void DestroyInstance();

private:
	static MyGLRenderContext *m_pContext;
    TriangleSample m_Sample;
};

#endif //GLES3LEARNING_MYGLRENDERCONTEXT_H
