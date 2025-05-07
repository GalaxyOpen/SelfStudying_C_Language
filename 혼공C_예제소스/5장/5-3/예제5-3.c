#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if (a > 0)              // ① 조건식1 : a가 0보다 크면 b에 1 대입
	{
		b = 1;
	}
	else if (a == 0)        // ② 조건식2 : a가 0보다 크지 않고 a가 0이면 b에 2 대입
	{
		b = 2;
	}
	else                    // ③ a가 0보다 크지 않고 0도 아니면 b에 3 대입
	{
		b = 3;
	}

	printf("b : %d\n", b);  // if문으로 결정된 b 값 출력

	return 0;
}

// 각 조건을 하나씩 달 때 
// 첫 조건 if ( )
// 두 번째 조건 (첫 조건이 거짓일 경우) else if ()
// 마지막 조건 ( 위 조건이 모두 거짓인 경우 ) else 