/*
	use:	案例基类

	author:	Sammy
*/
#pragma once

namespace sample {
	class baseSample
	{
		public:
			baseSample() = default;
			virtual ~baseSample() = default;

			// 初始化
			virtual void InitSample() = 0;
			// 绘制
			virtual void DrawSample() = 0;
			// 绘制内容
			virtual void DrawContent() = 0;
	};
}