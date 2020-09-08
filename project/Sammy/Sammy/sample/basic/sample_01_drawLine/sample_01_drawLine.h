/*
	use:	案例1：创建opgl与简单画线

	author:	Sammy
*/
#pragma once
#include "../baseSample.h"

namespace sample {
	class Sample_01_DrawLine : public baseSample
	{
		public:
			Sample_01_DrawLine();
			virtual ~Sample_01_DrawLine();

			// 初始化
			void InitSample() override;
			// 绘制
			void DrawSample() override;
			// 绘制线段
			void DrawContent() override;
	};
}