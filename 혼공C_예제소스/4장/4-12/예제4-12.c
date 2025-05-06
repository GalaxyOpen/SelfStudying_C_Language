#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;         // a와 b 중에 큰 값이 res에 저장
	printf("큰 값 : %d\n", res);

	return 0;
}

// (조건연산자)삼항연산자 ?와 : 기호를 함께 사용함. 
// 첫 번째 피연산자가 참이면 두 번째 피연산자가 결과값. 첫 번째 피연산자가 거짓이면 세 번째 피연산자가 결과값. 
// EX) : (a>b) ? a : b => a가 b가 큰 게 참이면 결과값은 a, 거짓이면 b가 됨. 