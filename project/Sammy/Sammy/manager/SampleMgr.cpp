//#include "../pch.h"
#include <iostream>
#include "SampleMgr.h"
#include "freeglut.h"

#include "../sample/basic/sample_01_drawLine/sample_01_drawLine.h"

SampleMgr::SampleMgr() : baseMgr()
{
	std::cout << "call SampleMgr construct" << std::endl;
}
SampleMgr::~SampleMgr()
{
	std::cout << "call SampleMgr destruct" << std::endl;
}
// ��ʼ������
// param:
//	sampleType - ����ʶ����
void SampleMgr::InitSample(ESAMPLE sampleType)
{
	switch (sampleType)
	{
	case E_SAMPLE_01_DRAW_LINE:
		SL<sample::Sample_01_DrawLine>::getMe()->InitSample();
		break;
	default:
		break;
	}
}
// ����
// param:
//	sampleType - ����ʶ����
void SampleMgr::Draw(ESAMPLE sampleType)
{
	switch (sampleType)
	{
	case E_SAMPLE_01_DRAW_LINE:
		SL<sample::Sample_01_DrawLine>::getMe()->DrawSample();
		break;
	default:
		break;
	}
}