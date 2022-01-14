#pragma once
#include "Libraries.h"
#include "Date.h"
#include "Student.h"

class Group
{
	Student** students = nullptr; //  ��������� �� ���������
	unsigned int GroupSize = 0; // ���������� ������� � ������
	char* GroupName = nullptr; // �������� ������
	char* Specialization = nullptr; // ������������� ������
	unsigned int course; // ����� �����

public:
	Group(); // ����������� �� ���������	
	Group(unsigned int size); // ����������� � ����� ����������	
	Group(unsigned int size, unsigned int course); // ����������� � ����� ����������	
	Group(const Group& original); // ����������� � ���������� ���� Group		
	~Group(); // ����������	

	void SetGroupName(char* GroupName);
	void SetSpecialization(char* Specialization);
	void SetCourse(int course);
	void SetGroupSize(unsigned int GroupSize);
	void AddStudent(const char* surname, const char* name, const char* patronymic);
	Group MergeGroups(Group& first, Group& second);
	void DeleteStudent();
	void RelocationStudent(Group& exit, Group& add, const char* surname, const char* name, const char* patronymic);
	void Delete_exam(int n);

	const char* const GetGroupName() const;
	const char* const GetSpecialization() const;
	const int const GetCourse() const;
	const int const GetGroupSize() const;

	string GetSurname();
	string GetName();
	string GetPatronymic();
	int GetExam();
	/*bool operator>(Student& second);
	bool operator<(Student& second);*/
	void Sort();

	void SetShow(const char* GroupName, const char* Specialization, unsigned int Course);
	void PrintGroup();
};

