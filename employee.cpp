#include "employee.h"

Employee::Employee(const int id, const string name, const int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

Employee::Employee(const int id, const string name)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = 1;
}

void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ����ɾ�����������" << endl;
}


string Employee::getDeptName()
{
	return string("Ա��");
}


