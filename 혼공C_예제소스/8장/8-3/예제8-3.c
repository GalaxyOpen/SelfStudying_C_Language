#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;                        // 배열 요소의 개수를 저장할 변수

	count = sizeof(score) / sizeof(score[0]);   // 배열 요소의 개수 계산

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		total += score[i];
	}
	avg = total / (double)count;      // 총합을 count로 나누어 평균 계산

	for (i = 0; i < count; i++)       // 11행에서 계산한 count만큼 반복
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}

// sizeof 연산자를 활용한 배열 처리 

// sizeof(배열명), / sizeof(배열 요소)
// count = sizeof(score) / sizeof(score[0]); << 여기서 count는 배열 요소의 개수(5개), sizeof(score)는 배열 전체 크기(20바이트), 
// sizeof(score[0]) 는 배열 요소 하나의 크기(4바이트)를 의미한다. 결과인 count 에서는 20 / 4 값인 5가 들어가게 된다. 

// 22행에서 배열의 평균을 구할 때도 사용함. 단, 이때는 total과 count가 모두 int형이므로
// 소수점 이하까지 구하려면 형 변환 연산자인 (double)을 사용해서 실수 연산이 되도록 했다. 
