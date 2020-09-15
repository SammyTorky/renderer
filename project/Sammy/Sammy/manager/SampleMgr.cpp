//#include "../pch.h"
#include <iostream>
#include "SampleMgr.h"
#include "freeglut.h"

#include "../utils/Error.h"

#include "../sample/basic/sample_01_drawLine/sample_01_drawLine.h"
#include "../sample/basic/sample_02_basicPrimitive/sample_02_basicPrimitive.h"

SampleMgr::SampleMgr() : baseMgr()
{
	std::cout << "call SampleMgr construct" << std::endl;
}
SampleMgr::~SampleMgr()
{
	std::cout << "call SampleMgr destruct" << std::endl;
}
// 初始化窗口
// param:
//	sampleType - 用于识别案例
void SampleMgr::InitSample(ESAMPLE sampleType)
{
	switch (sampleType)
	{
	case E_SAMPLE_01_DRAW_LINE:
		SL<sample::Sample_01_DrawLine>::getMe()->InitSample();
		break;
	case E_SAMPLE_02_POINT_PIXEL_TEST:
		SL<sample::Sample_02_BasicPrimitive>::getMe()->InitSample();
		break;
	default:
		break;
	}

	ErrorCheck();
}
// 绘制
// param:
//	sampleType - 用于识别案例
void SampleMgr::Draw(ESAMPLE sampleType)
{
	switch (sampleType)
	{
	case E_SAMPLE_01_DRAW_LINE:
		SL<sample::Sample_01_DrawLine>::getMe()->DrawSample();
		break;
	case E_SAMPLE_02_POINT_PIXEL_TEST:
		SL<sample::Sample_02_BasicPrimitive>::getMe()->DrawSample();
		break;
	default:
		break;
	}

	ErrorCheck();
}