#include "boss.h"

Boss::Boss(const int id, const string name, const int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

Boss::Boss(const int id, const string name)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = 3;
}

void Boss::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< " \t职工姓名： " << this->m_Name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDeptName()
{
	return string("总裁");
}