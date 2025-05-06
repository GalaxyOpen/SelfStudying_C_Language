#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20;               // a와 20을 더한 결과를 다시 a에 저장(+=)
	res *= b + 10;         // b에 10을 더한 결괏값에 res를 곱하고 다시 res에 저장(*=)

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}

// 복합대입 연산자 : 대입 연산자의 특징을 그대로 가짐. 
// 1. 왼쪽 피연산자는 반드시 변수가 와야 함. 
// 2. 오른쪽 항의 계산이 모두 끝난 다음에 복합 대입 연산자는 가장 마지막에 계산.  