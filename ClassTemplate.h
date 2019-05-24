#pragma once
#include "IGeneric.h"

template <class T>
public ref class ClassTemplate : public IGeneric<T>
{
public:
	virtual T ReturnResult()
	{
		return 1 + 3;
	}
};