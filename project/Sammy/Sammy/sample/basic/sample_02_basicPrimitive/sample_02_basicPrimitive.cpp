//#include "../pch.h"
#include <iostream>
#include <functional>
#include "../utils/Singleton.h"
#include "sample_02_basicPrimitive.h"
#include "freeglut.h"

namespace sample {
	// 构造
	Sample_02_BasicPrimitive::Sample_02_BasicPrimitive() : baseSample()
	{
		std::cout << "call Sample_01_DrawLine construct" << std::endl;
	}
	// 析构
	Sample_02_BasicPrimitive::~Sample_02_BasicPrimitive()
	{
		std::cout << "call Sample_01_DrawLine destruct" << std::endl;
	}
	// 初始化
	void Sample_02_BasicPrimitive::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(500, 100);
		glutInitWindowSize(400, 300);
		glutCreateWindow("PointPixelTest2");
	}
	// 绘制
	void Sample_02_BasicPrimitive::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//设置背景色

		glMatrixMode(GL_PROJECTION);			//投影矩阵
		gluOrtho2D(0.0, 200.0, 0.0, 200.0);		//正交相机范围

		glutDisplayFunc(SL<sample::Sample_02_BasicPrimitive>::DrawContent);
	}
	// 绘制线段
	void Sample_02_BasicPrimitive::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//清除至背景色
		//glPointSize(10);
		glColor3f(0.0f, 0.4f, 0.2f);			//设置绘制颜色
		glBegin(GL_POINTS);						//画线
			glVertex2f(100.0f, 100.0f);
			glVertex2f(101.0f, 100.0f);
			glVertex2f(102.0f, 100.4f);
			glVertex2f(103.0f, 100.6f);
			glVertex2f(103.0f, 101.0f);
			glVertex2iv(this->point);
		glEnd();

		glFlush();								//强制刷新
	}
}