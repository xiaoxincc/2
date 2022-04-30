/*#include <iostream>
using namespace std;
int main() {
	//敲桌子游戏：从一数到一百，如果其个位数有7或者十位数有7或者该数是7的倍数，我们打印敲桌子，
	//其余数字直接打出
	int n,count=0;
	for (n = 1; n <= 100; n++)
	{
		if ((n % 10 == 7) || ((n / 10)==7) || n % 7 == 0)
		{
			cout << "敲桌子" << endl;
			count++;
		}
		else{
			cout << n << endl;
		}
	}
	cout << "一共敲了" << count << "次桌子" << endl;
	system("pause");
	return 0;
}*/