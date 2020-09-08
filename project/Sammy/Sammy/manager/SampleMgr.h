/*
	use:	����������

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

	// ��ʼ������
	void InitSample(ESAMPLE sampleType);
	// ����
	void Draw(ESAMPLE sampleType);
};