/*
	use:	��������

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

		// ����
		virtual void DrawSample() = 0;
};