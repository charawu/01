#include<iostream>
#include"sorting.h"

void sorting()
{
	int array[10]{ 4,2,8,0,5,7,1,3,9,6 };
	//需要排序的数组
	for (int i = 0; i < 10 - 1; i++)
		//总共需要排序的次数为数组总数-1，因为每次排序都会把最大值移到最后
	{
		for (int j = 0; j < 10 - i - 1; j++)
			//对比次数为剩余需排序数字个数-1，但每经历一轮排序都会减少一个须排列数字所以要再减1
		{
			if (array[j] > array[j + 1])
				//判断大小
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				//交换顺序
			}
		}
	}

	//输出语句
	for (int o = 0; o < 10; o++)
	{
		cout << array[o] << endl;
	}
}