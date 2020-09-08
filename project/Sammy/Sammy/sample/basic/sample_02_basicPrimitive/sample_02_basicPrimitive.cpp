//#include "../pch.h"
#include <iostream>
#include <functional>
#include "../utils/Singleton.h"
#include "sample_02_basicPrimitive.h"
#include "freeglut.h"

namespace sample {
	// ����
	Sample_02_BasicPrimitive::Sample_02_BasicPrimitive() : baseSample()
	{
		std::cout << "call Sample_01_DrawLine construct" << std::endl;
	}
	// ����
	Sample_02_BasicPrimitive::~Sample_02_BasicPrimitive()
	{
		std::cout << "call Sample_01_DrawLine destruct" << std::endl;
	}
	// ��ʼ��
	void Sample_02_BasicPrimitive::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(500, 100);
		glutInitWindowSize(400, 300);
		glutCreateWindow("PointPixelTest2");
	}
	// ����
	void Sample_02_BasicPrimitive::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//���ñ���ɫ

		glMatrixMode(GL_PROJECTION);			//ͶӰ����
		gluOrtho2D(0.0, 200.0, 0.0, 200.0);		//���������Χ

		glutDisplayFunc(SL<sample::Sample_02_BasicPrimitive>::DrawContent);
	}
	// �����߶�
	void Sample_02_BasicPrimitive::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//���������ɫ
		//glPointSize(10);
		glColor3f(0.0f, 0.4f, 0.2f);			//���û�����ɫ
		glBegin(GL_POINTS);						//����
			glVertex2f(100.0f, 100.0f);
			glVertex2f(101.0f, 100.0f);
			glVertex2f(102.0f, 100.4f);
			glVertex2f(103.0f, 100.6f);
			glVertex2f(103.0f, 101.0f);
			glVertex2iv(this->point);
		glEnd();

		glFlush();								//ǿ��ˢ��
	}
}