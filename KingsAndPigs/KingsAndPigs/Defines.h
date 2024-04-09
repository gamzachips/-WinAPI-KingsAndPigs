#pragma once
#include "pch.h"

#define DECLARE_SINGLE(classname)		\
private:								\
	classname() = default;				\
public:									\
	static classname* GetInstance()		\
	{									\
		static classname s_instance;	\
		return &s_instance;				\
	}									

#define GET_SINGLE(classname) classname::GetInstance()

#define SAFE_DELETE(ptr)	\
if (ptr)					\
{							\
	delete ptr;				\
	ptr = nullptr;			\
}