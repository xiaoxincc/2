/*#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	//其中值得注意的是，c++中三目运算符返回的是变量，可以继续赋值
	//以下将举一个例子
	cout << "以下为对三目运算符进行赋值的例子" << endl;
	(a > b ? a : b) = 100;//因为a<b，所以此处返回的是b的值，而后对b进行赋值
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}*/