/*
	use:	����2������ͼԪ����

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

		// ��ʼ��
		void InitSample() override;
		// ����
		void DrawSample() override;
		// �����߶�
		void DrawContent() override;

	private:
		int point[2] = { 101, 101 };
	};
}