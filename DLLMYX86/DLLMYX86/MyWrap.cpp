#pragma once
#include "pch.h"

#include "pch.h"
#include "MyWrap.h"

#include "MyAbc.h"

//#pragma unmanaged
//������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
//����	C2338	C++ / CLI �� C++ / CX ��֧�����׶����Ʋ��ң���ʹ�� / Zc:twoPhase - DLLMYX86	C : \Users\DellMe\source\repos\DLLMYX86\DLLMYX86\c1xx	1

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


