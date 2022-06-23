#include "manager.h"

Manager::Manager(const int id, const string name, const int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

Manager::Manager(const int id, const string name)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = 2;
}

void Manager::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< " \t职工姓名： " << this->m_Name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;
}

string Manager::getDeptName()
{
	return string("经理");
}



