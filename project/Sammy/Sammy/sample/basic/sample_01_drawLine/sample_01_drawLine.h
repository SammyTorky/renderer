/*
	use:	����1������glut���ڹ��̣����Ƽ��߶�

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

			// ��ʼ��
			void InitSample() override;
			// ����
			void DrawSample() override;
			// �����߶�
			void DrawContent() override;
	};
}