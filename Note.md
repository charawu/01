sorting >> "排序"
guessNumGame >> "猜数字小游戏"
sequence >> "数列"
struct >> "结构体"


#   //在此示例代码中
#
#	int arry[] = { 1,2,3,4,5,6,7,8,9,0 };           //定义数组并赋值
#
#	int lenth = sizeof(arry) / 4;                   //对于此行代码不宜采用，因为在不同类型的数组中单个数据所占的内存空间不一定是4
#   int lenth = sizeof(arry) / sizeoff(arry[0]);	//而在此行代码中可以避免因不同类型数据数组所造成的错误
#   cout << lenth << endl;                          //打印数组长度
#
#   //在point_sorting.cpp中对于函数point_sorting，需要在函数体外传入数组和数组长度，在函数内进行数组长度的计算不可取，原因未知