/*#include <iostream>
using namespace std;
int main() {
	//break语句
	//作用：用于跳出选择结构或者循环结构
	//break的使用时机
	//1）出现在switch条件语句中，作用是终止case并跳出switch
	cout << "请选择副本的难度" << endl;
	cout << "1.普通难度" << endl;
	cout << "2.中等难度" << endl;
	cout << "2.困难难度" << endl;
	int select;
	int i,j;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "你选择的是普通难度" << endl;
		break;//退出switch语句
	case 2:
		cout << "你选择的是中等难度" << endl;
		break;
	case 3:
		cout << "你选择的是困难难度" << endl;
		break;
	default:
		break;
	}
	//2）出现在循环语句中，作用是跳出当前的循环语句
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	//3）出现在嵌套语句中，跳出最近的内层循环语句
	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{	
			if (j == 5)
			{
				break;//退出内层循环
			}
			cout << '*';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/