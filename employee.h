#pragma once 
#include<iostream>
using namespace std;
#include "worker.h"

//Ա����
class Employee :public Worker
{
public:

	//���캯��
	Employee(const int id, const string name, const int dId);

	//��������
	Employee(const int id, const string name);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};

