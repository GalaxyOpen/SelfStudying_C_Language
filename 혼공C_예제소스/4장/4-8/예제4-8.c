// �� ��ȯ ������
#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);      // (double)�� ����� a�� b�� ���� �Ǽ�(double)�� ��ȯ
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;                         // (int)�� ����� res�� ������ ����(int) �κи� �߸�
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	return 0;
}