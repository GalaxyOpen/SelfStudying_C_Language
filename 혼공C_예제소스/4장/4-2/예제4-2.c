// ������ ������ / �� ������ ������ %
#include <stdio.h>

int main(void)
{
	double apple;			// �Ǽ�
	int banana;				// ����
	int orange;				// ����

	apple = 5.0 / 2.0;		// �Ǽ��� �Ǽ��� ������ ����
	banana = 5 / 2;			// ������ ������ ������ ����
	orange = 5 % 2;			// ������ ������ ������ ����(%)

	printf("apple : %.1lf\n", apple); // 2.5
	printf("banana : %d\n", banana); // 2
	printf("orange : %d\n", orange); // 1

	return 0;
}

// ������ ������, ������ ������ 
// �����̶��� ����. �ܿ��� ��. 