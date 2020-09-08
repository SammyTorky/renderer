/*
	use:	案例2：基础图元绘制

	author:	Sammy
*/
#pragma once
#include "../baseSample.h"

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
		// 绘制线段
		void DrawContent() override;

	private:
		int point[2] = { 101, 101 };
	};
}