/*
	use:	常量定义

	author:	Sammy
*/
#pragma once

enum ESAMPLE
{
	E_SAMPLE_01_DRAW_LINE,				// 创建glut窗口，绘制简单线段。
	E_SAMPLE_02_POINT_PIXEL_TEST,		// 对于点使用的形式，以及浮点时取得的屏幕坐标
};

class baseSample
{
	public:
		baseSample() = default;
		virtual ~baseSample() = default;

		// 绘制
		virtual void DrawSample() = 0;
};