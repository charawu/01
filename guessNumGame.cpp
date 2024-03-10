#include"guessNumGame.h"

void guessNumGame()
{
	//定义变量
	srand(time(0));  //如果没有这行代码，rand()生成的随机数都和第一次一样
	int temp = rand() % 100 + 1;
	int guess = 0;
	int count = 0;
	cout << "猜数字小游戏\n你一共有6次机会，如果6次内你没有猜对，那么你就输了" << endl;
	//cout << "temp =" << temp << endl;  //测试时使用

	//循环
	while (temp != guess)
	{
		//用于判断次数
		if (count == 6) 
		{
			cout << "你输了\n";
			cout << "正确答案是：" << temp << endl;
			break;
		}

		cout << "请输入猜测数字\n";
		cin >> guess;
		count++;  //计数器

		//判断大小并给出提示
		if (temp < guess)
		{
			cout << "您猜大了\n";
		}
		else if(temp > guess)
		{
			cout << "您猜小了\n";
		}
		else
		{
			cout << "你赢了\n";
		}
	}
	
	//这两句用于暂停黑窗口
	system("pause");
}