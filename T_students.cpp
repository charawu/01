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
		cout << "T" << i + 1 << "老师的姓名" << endl;
		cin >> teacher_arr[i].name;
		for (int j = 0; j < 5; j++)
		{
			cout << "T" << i + 1 << "老师的第" << j + 1 << "名学生的姓名" << endl;
			cin >> teacher_arr[i].student_arr[j].name;
			
			cout << "T" << i + 1 << "老师的第" << j + 1 << "名学生的分数" << endl;
			cin >> teacher_arr[i].student_arr[j].sorce;
		}
	}

	cout << "每个老师的每个学生的信息" << endl;

	for (int i = 0; i < 3 ; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "老师" << i + 1 << "的姓名" << teacher_arr[i].name << "和学生" << j + 1 << "的姓名为：" << teacher_arr[i].student_arr[j].name << "分数：" << teacher_arr[i].student_arr[j].sorce << endl;

		}
	}
}