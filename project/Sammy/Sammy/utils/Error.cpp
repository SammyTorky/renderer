//#include "../pch.h"
#include <iostream>
#include "freeglut.h"

GLenum ErrorCheck()
{
	GLenum code;
	const GLubyte * str;
	code = glGetError();
	if (code != GL_NO_ERROR)
	{
		str = gluErrorString(code);
		fprintf(stderr, "OpenGL error: %s\n", str);
	}

	return code;
}
