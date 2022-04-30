/*#include <iostream>
using namespace std;
int main() {
	//1，创建数组
	int arr[5] = { 1,3,2,5,4 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i<len;i++)
	{
		cout << arr[i] << endl;
	}
	//2，实现逆置
	//1)记录起始下标位置
	//2)记录结束下标位置
	//3)起始下表与结束下标的元素互换
	//4)起始位置++，结束位置--
	//5)循环执行上述操作，直到起始位置>=结束位置
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(int) - 1;//结束下标
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//打印逆置后的数组
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << '\t';
	}


	system("pause");
	return 0;
}*/