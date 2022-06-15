#pragma once
#include "pch.h"

#include "pch.h"
#include "MyWrap.h"

#include "MyAbc.h"

//#pragma unmanaged
//严重性	代码	说明	项目	文件	行	禁止显示状态
//错误	C2338	C++ / CLI 或 C++ / CX 不支持两阶段名称查找；请使用 / Zc:twoPhase - DLLMYX86	C : \Users\DellMe\source\repos\DLLMYX86\DLLMYX86\c1xx	1

DLLMYX86::MyWrap::MyWrap(int i)
{
    m_Impl = new MyAbc(i);
    //throw gcnew System::NotImplementedException();
}

DLLMYX86::MyWrap::~MyWrap()
{
    delete m_Impl;
}

int DLLMYX86::MyWrap::get()
{
    //return 1;
    return m_Impl->get();
}


