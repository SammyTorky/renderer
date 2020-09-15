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
		std::cout << "call Sample_02_BasicPrimitive construct" << std::endl;
	}
	// ����
	Sample_02_BasicPrimitive::~Sample_02_BasicPrimitive()
	{
		std::cout << "call Sample_02_BasicPrimitive destruct" << std::endl;
	}
	// ��ʼ��
	void Sample_02_BasicPrimitive::InitSample()
	{
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(500, 100);
		glutInitWindowSize(800, 300);
		glutCreateWindow("Basic Primitive");
	}
	// ����
	void Sample_02_BasicPrimitive::DrawSample()
	{
		glClearColor(1.0, 1.0, 1.0, 0.0);		//���ñ���ɫ

		glMatrixMode(GL_PROJECTION);			//ͶӰ����
		gluOrtho2D(10.0, 400.0, 0.0, 200.0);		//���������Χ

		glutDisplayFunc(SL<sample::Sample_02_BasicPrimitive>::DrawContent);
	}
	// ��������
	void Sample_02_BasicPrimitive::DrawContent()
	{
		glClear(GL_COLOR_BUFFER_BIT);			//���������ɫ

		this->DrawSplitLines();					//���Ʒָ���
		this->DrawPoints();						//���Ƶ�
		this->DrawLineStrip();					//��������
		this->DrawLineLoop();					//���Ʊպ�����

		glFlush();								//ǿ��ˢ��
	}
	// ���Ʒָ���
	void Sample_02_BasicPrimitive::DrawSplitLines()
	{
		glLineWidth(3);							//����ָ������Ļ�ϵ����ؿ��
		glColor3f(1.0f, 1.0f, 0.0f);			//���û�����ɫ
		glBegin(GL_LINES);						//���ָ���

			glVertex2i(0, 0);					//��һ���߻�������������÷�Χ֮��
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
			glVertex2i(400, 300);				//���һ���߻�ѹ����������Ҳ�

		glEnd();
	}
	// ���Ƶ�
	GLint draw_points_point[2] = { 15, 105 };
	void Sample_02_BasicPrimitive::DrawPoints()
	{
		glPointSize(5);							//����ָ������Ļ�ϵ����ش�С
		glColor3f(0.0f, 0.4f, 0.2f);			//���û�����ɫ
		glBegin(GL_POINTS);						//����

			//ʹ������ֱ�ӻ���
			glVertex2f(20.0f, 100.0f);
			glVertex2f(25.0f, 100.0f);
			glVertex2f(30.0f, 100.4f);
			glVertex2f(35.0f, 100.6f);
			glVertex2f(40.0f, 102.0f);

			//ʹ���������
			glVertex2iv(draw_points_point);

		glEnd();
	}
	// ��������ͼ��
	void Sample_02_BasicPrimitive::DrawLineStrip()
	{
		glLineWidth(2);							//����ָ������Ļ�ϵ����ؿ��
		glColor3f(1.0f, 0.0f, 0.0f);			//���û�����ɫ
		glBegin(GL_LINE_STRIP);					//��������

			glVertex2i(65, 125);
			glVertex2i(90, 10);
			glVertex2i(72, 80);
			glVertex2i(95, 160);

		glEnd();
	}
	// ���Ʊպ�����ͼ��
	void Sample_02_BasicPrimitive::DrawLineLoop()
	{
		glLineWidth(2);							//����ָ������Ļ�ϵ����ؿ��
		glColor3f(1.0f, 0.0f, 0.0f);			//���û�����ɫ
		glBegin(GL_LINE_LOOP);					//���ñպ�����

		glVertex2i(115, 125);
		glVertex2i(140, 10);
		glVertex2i(122, 80);
		glVertex2i(145, 160);

		glEnd();
	}
}