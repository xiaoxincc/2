/*#include <iostream>
#include <ctime>//time系统时间头文件
using namespace std;
int main() {
	//1)利用系统生成随机数,但是直接利用rand生成的是伪随机数
	//可添加随机数种子，利用当前系统时间生成随机数，防止每次生产随机数一样
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//利用rand生成一个1~100内的随机数
	cout << "num=" << num << endl;
	//2)通过输入进行猜测
	int val = 0;
	
	//3)进行判断
	while (1)
	{	
		cin >> val;//玩家输入的数 据
		if (val > num)
		{
			cout << "你猜的数偏大" << endl;
		}
		else if(val<num)
		{
			cout << "你猜的数偏小" << endl;
		}
		else 
		{
			cout << "恭喜你猜对了" << endl;
			break;//利用break可以推出当前循环
		}
		//猜错		退出游戏
		//猜对		提示猜的结果是偏大还是偏小，然后返回第二步
	}
	
	
	system("pause");
	return 0;
}*/