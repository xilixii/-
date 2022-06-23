#pragma once
#include<iostream>
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"
using namespace std;

class WorkerManager
{
	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ��
	void Find_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//��������
	~WorkerManager();
};

