/*
	use:	����������

	author:	Sammy
*/
#pragma once
#include "Singleton.h"

class baseMgr
{
public:
	baseMgr();
	virtual ~baseMgr();

	baseMgr(const baseMgr &) = delete;
	baseMgr & operator = (const baseMgr &) = delete;
};