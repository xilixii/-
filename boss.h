#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//�ϰ���
class Boss :public Worker
{
public:

	Boss(const int id, const string name, const int dId);

	//��������
	Boss(const int id, const string name);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};

