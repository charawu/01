#include<iostream>
#include"sequence.h"

void sequence()
{
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	int scores = 0;
	int num = 0;
	int rows;
    
	cout << "����ڼ�λͬѧ" << endl;
	cin >> rows;

	while (rows<=0 || rows>3)
	{
		cout << "����������������" << endl;
		cout << "����ڼ�λͬѧ" << endl;
		cin >> rows;
	}

	for (int j = 0; j < 3; j++)
	{
		cout << "j=" << j << endl;
		num = num + arr[rows-1][j];
	}
	cout << "��nλͬѧ���ܷ�" << num <<endl;

	system("pause");
}