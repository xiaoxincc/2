/*#include <iostream>
using namespace std;
int main() {
	//冒泡排序
	//作用：对数组内部元素进行排序
	//1）比较相邻两个元素，如果第一个比第二个大，就交换他们两个
	//2）对每一对相邻元素做同样工作，执行完毕后，找到第一个最大值
	//3）重复以上的操作，每次比较次数减1，直到不要比较
	//利用冒泡排序法来实现升序排序
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int i, j;//i控制外层循环，j控制内层循环
	int len = sizeof(arr) / sizeof(int);
	cout << "排序前" << endl;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << '\t' ;
	}
	//总共排序轮数为 元素个数-1
	for (i = 0; i < len - 1; i++)
	{	
		//内层循环对比次数为：元素个数-当前循环轮数-1
		for (j = 0; j < len - i - 1; j++)
		{	
			//如果前一个数大于后面这个数，则交换位置
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后" << endl;
	for (i = 0; i < len; i++)
	{
		cout << arr[i]<<'\t';
	}

	system("pause");
	return 0;
}*/