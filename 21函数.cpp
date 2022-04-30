//函数
//作用：将一段经常使用的代码封装起来，减少重复代码量
//定义：返回值类型 函数名 （参数列表）{
//								函数体语句  
//								return表达式
//								}
#include <iostream>
using namespace std;
int Sum(int sum1, int sum2)
{
	int sum = sum1 + sum2;
	return sum;
}
int main() {
	int sum1,sum2;
	cin >> sum1 >> sum2;
	int sum = Sum(sum1, sum2);
	cout << sum << endl;
	return 0;
}