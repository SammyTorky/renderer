//#include "../pch.h"
#include <iostream>
#include <functional>
#include "../utils/Singleton.h"
#include "sample_01_drawLine.h"
#include "freeglut.h"

namespace sample {
	// ����
	Sample_01_DrawLine::Sample_01_DrawLine() : baseSample()
	{
		std::cout << "call Sample_01_DrawLine construct" << std::endl;
	}
	// ����
	Sample_01_DrawLine::~Sample_01_DrawLine()
	{
		std::cout << "call Sample_01_DrawLine destruct" << std::endl;
	}
	// ��ʼ��
	void Sample_01_DrawLine::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(50, 100);
		glutInitWindowSize(400, 300);
		glutCreateWindow("����");
	}
	// ����
	void Sample_01_DrawLine::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//���ñ���ɫ

		glMatrixMode(GL_PROJECTION);			//ͶӰ����
		gluOrtho2D(0.0, 200.0, 0.0, 150.0);		//���������Χ

		glutDisplayFunc(SL<sample::Sample_01_DrawLine>::DrawContent);
	}
	// �����߶�
	void Sample_01_DrawLine::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//���������ɫ

		glColor3f(0.0, 0.4, 0.2);				//���û�����ɫ
		glBegin(GL_LINES);						//����
			glVertex2i(180, 15);
			glVertex2i(10, 145);
		glEnd();

		glFlush();								//ǿ��ˢ��
	}
}