/*#include <iostream>
using namespace std;
int main() {
	//break���
	//���ã���������ѡ��ṹ����ѭ���ṹ
	//break��ʹ��ʱ��
	//1��������switch��������У���������ֹcase������switch
	cout << "��ѡ�񸱱����Ѷ�" << endl;
	cout << "1.��ͨ�Ѷ�" << endl;
	cout << "2.�е��Ѷ�" << endl;
	cout << "2.�����Ѷ�" << endl;
	int select;
	int i,j;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;//�˳�switch���
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	default:
		break;
	}
	//2��������ѭ������У�������������ǰ��ѭ�����
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	//3��������Ƕ������У�����������ڲ�ѭ�����
	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{	
			if (j == 5)
			{
				break;//�˳��ڲ�ѭ��
			}
			cout << '*';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/