#include<iostream>
#include"sorting.h"

void sorting()
{
	int array[10]{ 4,2,8,0,5,7,1,3,9,6 };
	//��Ҫ���������
	for (int i = 0; i < 10 - 1; i++)
		//�ܹ���Ҫ����Ĵ���Ϊ��������-1����Ϊÿ�����򶼻�����ֵ�Ƶ����
	{
		for (int j = 0; j < 10 - i - 1; j++)
			//�Աȴ���Ϊʣ�����������ָ���-1����ÿ����һ�����򶼻����һ����������������Ҫ�ټ�1
		{
			if (array[j] > array[j + 1])
				//�жϴ�С
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				//����˳��
			}
		}
	}

	//������
	for (int o = 0; o < 10; o++)
	{
		cout << array[o] << endl;
	}
}