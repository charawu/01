#include<iostream>
#include"T_students.h"
#include<string.h>


 void T_students( )
{
	struct student
	{
		string name;
		int sorce;
	};

	struct teacher
	{
		string name;
		struct student student_arr[5];
	};

	teacher teacher_arr[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "T" << i + 1 << "��ʦ������" << endl;
		cin >> teacher_arr[i].name;
		for (int j = 0; j < 5; j++)
		{
			cout << "T" << i + 1 << "��ʦ�ĵ�" << j + 1 << "��ѧ��������" << endl;
			cin >> teacher_arr[i].student_arr[j].name;
			
			cout << "T" << i + 1 << "��ʦ�ĵ�" << j + 1 << "��ѧ���ķ���" << endl;
			cin >> teacher_arr[i].student_arr[j].sorce;
		}
	}

	cout << "ÿ����ʦ��ÿ��ѧ������Ϣ" << endl;

	for (int i = 0; i < 3 ; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "��ʦ" << i + 1 << "������" << teacher_arr[i].name << "��ѧ��" << j + 1 << "������Ϊ��" << teacher_arr[i].student_arr[j].name << "������" << teacher_arr[i].student_arr[j].sorce << endl;

		}
	}
}