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
		std::cout << "call Sample_02_BasicPrimitive construct" << std::endl;
	}
	// 析构
	Sample_02_BasicPrimitive::~Sample_02_BasicPrimitive()
	{
		std::cout << "call Sample_02_BasicPrimitive destruct" << std::endl;
	}
	// 初始化
	void Sample_02_BasicPrimitive::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(500, 100);
		glutInitWindowSize(800, 300);
		glutCreateWindow("Basic Primitive");
	}
	// 绘制
	void Sample_02_BasicPrimitive::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//设置背景色

		glMatrixMode(GL_PROJECTION);			//投影矩阵
		gluOrtho2D(10.0, 400.0, 0.0, 200.0);		//正交相机范围

		glutDisplayFunc(SL<sample::Sample_02_BasicPrimitive>::DrawContent);
	}
	// 绘制内容
	void Sample_02_BasicPrimitive::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//清除至背景色

		this->DrawSplitLines();					//绘制分割线
		this->DrawPoints();						//绘制点
		this->DrawLineStrip();					//绘制折线
		this->DrawLineLoop();					//绘制闭合折线

		glFlush();								//强制刷新
	}
	// 绘制分割线
	void Sample_02_BasicPrimitive::DrawSplitLines()
	{
		glLineWidth(3);							//这里指得是屏幕上的像素宽度
		glColor3f(1.0f, 1.0f, 0.0f);			//设置绘制颜色
		glBegin(GL_LINES);						//画分割线

			glVertex2i(0, 0);					//第一条线会在正交相机设置范围之外
			glVertex2i(0, 500);

			glVertex2i(50, 0);
			glVertex2i(50, 300);

			glVertex2i(100, 0);
			glVertex2i(100, 300);

			glVertex2i(150, 0);
			glVertex2i(150, 300);

			glVertex2i(200, 0);
			glVertex2i(200, 300);

			glVertex2i(250, 0);
			glVertex2i(250, 300);

			glVertex2i(300, 0);
			glVertex2i(300, 300);

			glVertex2i(350, 0);
			glVertex2i(350, 300);

			glVertex2i(400, 0);
			glVertex2i(400, 300);				//最后一条线会压在正交相机右侧

		glEnd();
	}
	// 绘制点
	GLint draw_points_point[2] = { 15, 105 };
	void Sample_02_BasicPrimitive::DrawPoints()
	{
		glPointSize(5);							//这里指得是屏幕上的像素大小
		glColor3f(0.0f, 0.4f, 0.2f);			//设置绘制颜色
		glBegin(GL_POINTS);						//画点

			//使用数据直接绘制
			glVertex2f(20.0f, 100.0f);
			glVertex2f(25.0f, 100.0f);
			glVertex2f(30.0f, 100.4f);
			glVertex2f(35.0f, 100.6f);
			glVertex2f(40.0f, 102.0f);

			//使用数组绘制
			glVertex2iv(draw_points_point);

		glEnd();
	}
	// 绘制折线图例
	void Sample_02_BasicPrimitive::DrawLineStrip()
	{
		glLineWidth(2);							//这里指得是屏幕上的像素宽度
		glColor3f(1.0f, 0.0f, 0.0f);			//设置绘制颜色
		glBegin(GL_LINE_STRIP);					//设置折线

			glVertex2i(65, 125);
			glVertex2i(90, 10);
			glVertex2i(72, 80);
			glVertex2i(95, 160);

		glEnd();
	}
	// 绘制闭合折线图例
	void Sample_02_BasicPrimitive::DrawLineLoop()
	{
		glLineWidth(2);							//这里指得是屏幕上的像素宽度
		glColor3f(1.0f, 0.0f, 0.0f);			//设置绘制颜色
		glBegin(GL_LINE_LOOP);					//设置闭合折线

		glVertex2i(115, 125);
		glVertex2i(140, 10);
		glVertex2i(122, 80);
		glVertex2i(145, 160);

		glEnd();
	}
}