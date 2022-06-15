#pragma once
#pragma once

#define LX_DLL_CLASS_EXPORTS
#include "MyAbc.h"
#include <msclr/marshal_cppstd.h>

using namespace msclr::interop;
using namespace System;
#include <windows.h>
#include <vcclr.h>

namespace MyCpp
{
	public ref class MyWrap
	{
	public:
		MyWrap(int);
		~MyWrap();
		int get();
	private:
		MyAbc* m_Impl;
	};
};


