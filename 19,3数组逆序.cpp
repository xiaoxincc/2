/*#include <iostream>
using namespace std;
int main() {
	//1����������
	int arr[5] = { 1,3,2,5,4 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i<len;i++)
	{
		cout << arr[i] << endl;
	}
	//2��ʵ������
	//1)��¼��ʼ�±�λ��
	//2)��¼�����±�λ��
	//3)��ʼ�±�������±��Ԫ�ػ���
	//4)��ʼλ��++������λ��--
	//5)ѭ��ִ������������ֱ����ʼλ��>=����λ��
	int start = 0;//��ʼ�±�
	int end = sizeof(arr) / sizeof(int) - 1;//�����±�
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	//��ӡ���ú������
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << '\t';
	}


	system("pause");
	return 0;
}*/