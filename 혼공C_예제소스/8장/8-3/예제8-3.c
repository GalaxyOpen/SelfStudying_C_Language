#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;                        // �迭 ����� ������ ������ ����

	count = sizeof(score) / sizeof(score[0]);   // �迭 ����� ���� ���

	for (i = 0; i < count; i++)       // 11�࿡�� ����� count��ŭ �ݺ�
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)       // 11�࿡�� ����� count��ŭ �ݺ�
	{
		total += score[i];
	}
	avg = total / (double)count;      // ������ count�� ������ ��� ���

	for (i = 0; i < count; i++)       // 11�࿡�� ����� count��ŭ �ݺ�
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}

// sizeof �����ڸ� Ȱ���� �迭 ó�� 

// sizeof(�迭��), / sizeof(�迭 ���)
// count = sizeof(score) / sizeof(score[0]); << ���⼭ count�� �迭 ����� ����(5��), sizeof(score)�� �迭 ��ü ũ��(20����Ʈ), 
// sizeof(score[0]) �� �迭 ��� �ϳ��� ũ��(4����Ʈ)�� �ǹ��Ѵ�. ����� count ������ 20 / 4 ���� 5�� ���� �ȴ�. 

// 22�࿡�� �迭�� ����� ���� ���� �����. ��, �̶��� total�� count�� ��� int���̹Ƿ�
// �Ҽ��� ���ϱ��� ���Ϸ��� �� ��ȯ �������� (double)�� ����ؼ� �Ǽ� ������ �ǵ��� �ߴ�. 
