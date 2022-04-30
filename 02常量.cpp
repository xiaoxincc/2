//常量的定义方式
//1、#define 宏常量
//2、const修饰的变量,通常写在函数体内部 
/*#include <iostream>
//#include <iomanip>
using namespace std;
#define Day 7//定义宏常量结尾不加分号;
int main() {
	//此处不可再定义Day=...，因为Day是常量，
	//一旦修改就会报错
	cout << "一周总共有：" << Day << "天" << endl;
	const int month = 12;
	cout << "一年共有" << month << "个月份" << endl;
	cout << sizeof(long int) << endl;//windows long int 型变量占4个字节
	cout << sizeof(long long) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(Day) << endl;
	cout << sizeof(double) << endl;
	float m = 3e2;
	cout << m << endl;
	double n = 3.1415926;
	cout << n << endl;
	float f1 = 3.22f;//对于单精度浮点数加上一个f以表示其为一个float型，否则计算机将默认为double类型
//	cout << setprecision(7) << n << endl;//默认情况下输出一个小数会默认显示六位有效数字
	system("pause");
	return 0;
}*/