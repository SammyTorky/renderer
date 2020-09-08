// Sammy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include "freeglut.h"
#include "./manager/SampleMgr.h"
#include "./utils/Singleton.h"
#include "constant.h"

int main(int argc, char ** argv)
{
	// 初始化glut
	glutInit(&argc, argv);

	SL<SampleMgr>::getMe()->InitSample(E_SAMPLE_01_DRAW_LINE);
	SL<SampleMgr>::getMe()->Draw(E_SAMPLE_01_DRAW_LINE);

	SL<SampleMgr>::getMe()->InitSample(E_SAMPLE_02_POINT_PIXEL_TEST);
	SL<SampleMgr>::getMe()->Draw(E_SAMPLE_02_POINT_PIXEL_TEST);

	// 绘制和消息循环
	glutMainLoop();
}
