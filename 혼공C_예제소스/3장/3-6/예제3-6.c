#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry";               // char �迭 ����� ���ڿ� �ʱ�ȭ ex) char �迭��[���ڿ�����+1] = ���ڿ�
	
	printf("���� : %s\n", fruit);                // �迭������ ����� ���ڿ� ��� = ���� : strawberry
	printf("����´ : %s %s\n", fruit, "jam");    // ���ڿ� ����� ���� %s�� ��� = ����´ : strawberry jam

	return 0;
}

// 5�࿡�� strawberry �� 10���̹Ƿ� fruit �迭�� ũ��� �ּ��� 11���� Ŀ�� ��. 
// �̷� char �迭�� ���ڿ��� �����ϴ� ������ ������ �ϸ�, %s �����. 