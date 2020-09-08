//#include "../pch.h"
#include <iostream>
#include <functional>
#include "../utils/Singleton.h"
#include "sample_01_drawLine.h"
#include "freeglut.h"

namespace sample {
	// 构造
	Sample_01_DrawLine::Sample_01_DrawLine() : baseSample()
	{
		std::cout << "call Sample_01_DrawLine construct" << std::endl;
	}
	// 析构
	Sample_01_DrawLine::~Sample_01_DrawLine()
	{
		std::cout << "call Sample_01_DrawLine destruct" << std::endl;
	}
	// 初始化
	void Sample_01_DrawLine::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(50, 100);
		glutInitWindowSize(400, 300);
		glutCreateWindow("案例");
	}
	// 绘制
	void Sample_01_DrawLine::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//设置背景色

		glMatrixMode(GL_PROJECTION);			//投影矩阵
		gluOrtho2D(0.0, 200.0, 0.0, 150.0);		//正交相机范围

		glutDisplayFunc(SL<sample::Sample_01_DrawLine>::DrawContent);
	}
	// 绘制线段
	void Sample_01_DrawLine::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//清除至背景色

		glColor3f(0.0, 0.4, 0.2);				//设置绘制颜色
		glBegin(GL_LINES);						//画线
			glVertex2i(180, 15);
			glVertex2i(10, 145);
		glEnd();

		glFlush();								//强制刷新
	}
}