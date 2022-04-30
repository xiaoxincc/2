/*#include <iostream>
using namespace std;
int main() {
	//1)逻辑非：!
	//!			非			！a			如果a为假则，！a为真；如果a为真则！a为假；
	//总结：真变假，假变真
	int a = 10;
	cout << !a << endl;//0
	cout << !!a << endl;//1
	//2)逻辑与：&&
	//&&		与			a&&b			如果a与b都为真，则结果为真；否则为假；
	//总结：同真为真，其余为假	
	int b = 10;
	cout << (a && b) << endl;//1
	cout << (a && 0) << endl;//0
	//3)逻辑或：||
	//||		或			a||b			如果a和b有一个为真，则结果为真；二者都为假时，结果为假；
	//总结：同假为假，其余为真
	cout << (a || b) << endl;//1
	system("pause");
	return 0;
}*/