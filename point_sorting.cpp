#include"point_sorting.h"
#include<iostream>

void point_sorting(int arr[] ,  int lenth)
{
	//√∞≈›≈≈–Ú
	for (int i = 0; i < lenth - 1; i++)
	{
		for (int j = 0; j < lenth - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				//≈–∂œ¥Û–°
			{
				int* p1 = &arr[j];
				int* p2 = &arr[j + 1];
				//∂®“Â÷∏’Î
				
				int temp = *p1;
				*p1 = *p2;
				*p2 = temp;
				//Ωªªªµÿ÷∑À≥–Ú
			}
		}
	}
}