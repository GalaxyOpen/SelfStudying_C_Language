#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)               // a가 0보다 작지만
	{
		if (b > 0)           // b가 0보다 크면 ok 출력
		{
			printf("ok");
		}
	}
	else                     // a가 0 이상이면 ok 출력
	{
		printf("ok");
	}

	return 0;
}

// if in if and else 
// 1. 변수 int a = 10, b = 20 선언 
// 2. 첫 조건 if a < 0 이 참 이면서 
// 2-1. b가 0보다 크면 ok 출력. 
// 3. 첫 조건 if a < 0 이 거짓 이면 ok 출력. 
 