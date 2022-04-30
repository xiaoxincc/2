/*#include <iostream>
using namespace std;
//语法
//switch（表达式）
//{
// case 结果1:执行语句;break;
// case 结果2:执行语句;break;
// .
// .
// .
// default:执行语句;break;
//}
//示例
int main() {
	int score;
	cout << "请输入您打的分数" << endl;
	cin >> score;
	cout << "您打的分数为" << score << endl;
	switch(score)
	{
		case 10:
		case 9:
			cout << "您认为是经典电影" << endl;
			break;//跳出当前分支
		case 8:
		case 7:
			cout << "您认为是非常好的电影" << endl;
			break;
		case 6:
		case 5:
			cout << "您认为是一般的电影" << endl;
			break;
		default :
			cout << "您认为是烂片" << endl;
			break;
	}
	//if与switch的区别
	//switch缺点:判断的时候只能是整型或者字符型，不可以是一个区间
	//switch优点：结构清晰，执行效率高
	//注意case里如果没有break，那么程序会一直执行下去
	system("pause");
	return 0;
}*/