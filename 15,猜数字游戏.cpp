/*#include <iostream>
#include <ctime>//timeϵͳʱ��ͷ�ļ�
using namespace std;
int main() {
	//1)����ϵͳ���������,����ֱ������rand���ɵ���α�����
	//�������������ӣ����õ�ǰϵͳʱ���������������ֹÿ�����������һ��
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//����rand����һ��1~100�ڵ������
	cout << "num=" << num << endl;
	//2)ͨ��������в²�
	int val = 0;
	
	//3)�����ж�
	while (1)
	{	
		cin >> val;//���������� ��
		if (val > num)
		{
			cout << "��µ���ƫ��" << endl;
		}
		else if(val<num)
		{
			cout << "��µ���ƫС" << endl;
		}
		else 
		{
			cout << "��ϲ��¶���" << endl;
			break;//����break�����Ƴ���ǰѭ��
		}
		//�´�		�˳���Ϸ
		//�¶�		��ʾ�µĽ����ƫ����ƫС��Ȼ�󷵻صڶ���
	}
	
	
	system("pause");
	return 0;
}*/