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
    
	cout << "输入第几位同学" << endl;
	cin >> rows;

	while (rows<=0 || rows>3)
	{
		cout << "数据有误重新输入" << endl;
		cout << "输入第几位同学" << endl;
		cin >> rows;
	}

	for (int j = 0; j < 3; j++)
	{
		cout << "j=" << j << endl;
		num = num + arr[rows-1][j];
	}
	cout << "第n位同学的总分" << num <<endl;

	system("pause");
}