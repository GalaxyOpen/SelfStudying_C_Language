#include <stdio.h>

void print_line(void);                // 함수 선언

int main(void)
{
	print_line();                     // 함수 호출
	printf("학번     이름     전공     학점\n");
	print_line();                     // 함수 호출

	return 0;
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)          // 50번 반복하여 '-' 출력
	{
		printf("-");
	}
	printf("\n");
}

// 매개변수와 반환값이 모두 없는 함수 
// 반환형태에도 void, 함수 들어가는 곳에도 void를 넣는다. 
// 단순 출력인 경우에 해당한다. 