#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//������
class Manager :public Worker
{
public:

	Manager(const int id, const string name, const int dId);

	//��������
	Manager(const int id, const string name);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};
