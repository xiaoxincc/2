//����
//���ã���һ�ξ���ʹ�õĴ����װ�����������ظ�������
//���壺����ֵ���� ������ �������б�{
//								���������  
//								return���ʽ
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