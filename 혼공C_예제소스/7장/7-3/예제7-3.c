#include <stdio.h>

void print_char(char ch, int count);    // �Լ� ����

int main(void)
{
	print_char('@', 5);                 // ���ڿ� ���ڸ� �ְ� �Լ� ȣ��

	return 0;
}

void print_char(char ch, int count)     // �Ű������� ������ ��ȯ���� ����.
{
	int i;

	for (i = 0; i < count; i++)         // i�� 0���� count-1���� ����, count�� �ݺ�
	{
		printf("%c", ch);               // �Ű����� ch�� ���� ���� ���
	}

	return;
}

// ��ȯ���� ���� �Լ� 
// print_char �Լ��� ȭ�鿡 ����� ������ �Լ��� ������ ����̹Ƿ� ȣ���� ������ Ư���� ���� ��ȯ�� �ʿ䰡 ����. 
// ����� �Լ��� �տ� void�� ���� �ȴ�. 
// �ٵ� return ; �̷��� �ᵵ �ǰ� �����ص� �ȴ�. 
// �߰���, �Լ� ���� �߰��� ���ư��� �Ѵٸ� return���� �� �� �ִµ�, int i; �Ʒ� �ٿ� if (count > 10) return; ������ ������ �ȴ�. 
