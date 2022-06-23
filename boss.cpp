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
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName()
{
	return string("�ܲ�");
}