#pragma once
#pragma once

#ifndef LX_DLL_CLASS_EXPORTS
#define LX_DLL_CLASS __declspec(dllexport)
#else
#define LX_DLL_CLASS __declspec(dllimport)
#endif


class LX_DLL_CLASS MyAbc
{
public:
	MyAbc(int j) :num(j) {}
	~MyAbc() {};
	int get();

private:
	int num;
};
