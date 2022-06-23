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
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ������ϰ彻��������,���·������Ա��" << endl;
}

string Manager::getDeptName()
{
	return string("����");
}



