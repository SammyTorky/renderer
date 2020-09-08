/*
	use:	常量定义

	author:	Sammy
*/
#pragma once

enum ESAMPLE
{
	E_SAMPLE_01_DRAW_LINE,
};

class baseSample
{
	public:
		baseSample() = default;
		virtual ~baseSample() = default;

		// 绘制
		virtual void DrawSample() = 0;
};