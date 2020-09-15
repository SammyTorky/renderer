/*
	use:	����2������ͼԪ����

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

		// ��ʼ��
		void InitSample() override;
		// ����
		void DrawSample() override;
		// ��������
		void DrawContent() override;

	private:
		// ���Ʒָ���
		void DrawSplitLines();
		// ���Ƶ�
		void DrawPoints();
		// ��������ͼ��
		void DrawLineStrip();
		// ���Ʊպ�����ͼ��
		void DrawLineLoop();
	};
}