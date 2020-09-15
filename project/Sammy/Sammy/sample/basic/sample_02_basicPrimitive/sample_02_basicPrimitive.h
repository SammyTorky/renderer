/*
	use:	案例2：基础图元绘制

	author:	Sammy
*/
#pragma once
#include "../baseSample.h"
#include "freeglut.h"

namespace sample {
	class Sample_02_BasicPrimitive : public baseSample
	{
	public:
		Sample_02_BasicPrimitive();
		virtual ~Sample_02_BasicPrimitive();

		// 初始化
		void InitSample() override;
		// 绘制
		void DrawSample() override;
		// 绘制内容
		void DrawContent() override;

	private:
		// 绘制分割线
		void DrawSplitLines();
		// 绘制点
		void DrawPoints();
		// 绘制折线图例
		void DrawLineStrip();
		// 绘制闭合折线图例
		void DrawLineLoop();
	};
}