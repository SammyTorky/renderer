/*
	use:	案例管理类

	author:	Sammy
*/
#pragma once
#include "./baseMgr.h"
#include "../constant.h"

class SampleMgr : public baseMgr
{
public:
	SampleMgr();
	virtual ~SampleMgr();

	SampleMgr(const SampleMgr &) = delete;
	SampleMgr & operator = (const SampleMgr &) = delete;

	// 初始化窗口
	void InitSample(ESAMPLE sampleType);
	// 绘制
	void Draw(ESAMPLE sampleType);
};