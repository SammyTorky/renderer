/*
	use:	��������

	author:	Sammy
*/
#pragma once

enum ESAMPLE
{
	E_SAMPLE_01_DRAW_LINE,				// ����glut���ڣ����Ƽ��߶Ρ�
	E_SAMPLE_02_POINT_PIXEL_TEST,		// ���ڵ�ʹ�õ���ʽ���Լ�����ʱȡ�õ���Ļ����
};

class baseSample
{
	public:
		baseSample() = default;
		virtual ~baseSample() = default;

		// ����
		virtual void DrawSample() = 0;
};