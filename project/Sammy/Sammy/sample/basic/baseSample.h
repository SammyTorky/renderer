/*
	use:	��������

	author:	Sammy
*/
#pragma once

namespace sample {
	class baseSample
	{
		public:
			baseSample() = default;
			virtual ~baseSample() = default;

			// ��ʼ��
			virtual void InitSample() = 0;
			// ����
			virtual void DrawSample() = 0;
			// ��������
			virtual void DrawContent() = 0;
	};
}