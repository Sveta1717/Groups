#include "Groups.h"

int main()
{
	setlocale(0, "UKR");
	srand(time(0));

	Group* a = new Group();
	cout << "������ 1\n";
	a->AddStudent("�����", "�������", "��������");
	a->AddStudent("�����", "����", "�����������");
	a->PrintGroup();

	Student s1("����", "�������", "�������");
	s1.Print();
	//Student s2 = s1;
	//s2.Print();
	cout << "����� ������ ������\n";
	cout << "___________________\n\n";
	Group* c = a;
	c->PrintGroup(); // ����� ������ a	
	cout << "----------------\n\n";
	cout << "������ � ������ ����������\n";
	cout << "________________________\n\n";
	Group* b = new Group();
	cout << "\n������ 2\n";
	b->AddStudent("�����", "�����", "����������");
	b->AddStudent("������", "�������", "�������");
	b->AddStudent("������", "����", "����������");
	b->PrintGroup();
	cout << "----------------\n\n";
	cout << "������� ������ ��������\n";
	cout << "________________________\n\n";
	b->DeleteStudent(); // ������� ��������
	b->PrintGroup();
	cout << "----------------\n\n";
	cout << "���������� ������������\n";
	cout << "________________________\n\n";
	b->Delete_exam(5);
	/*cout << "������� �����\n";
	Group result = Group::MergeGroups(*a, *b);
	result.PrintGroup();*/
	//cout << "������� ��������\n";
	/*Group result1 = Group::RelocationStudent(*b, *a, "������", "����", "����������");
	result1.PrintGroup();*/
	cout << "\n\n";
}