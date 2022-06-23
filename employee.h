#pragma once 
#include<iostream>
using namespace std;
#include "worker.h"

//员工类
class Employee :public Worker
{
public:

	//构造函数
	Employee(const int id, const string name, const int dId);

	//方法重载
	Employee(const int id, const string name);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	virtual string getDeptName();
};

