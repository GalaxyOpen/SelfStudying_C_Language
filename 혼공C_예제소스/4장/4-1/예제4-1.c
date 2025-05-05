#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;                   // 대입 연산(=)
	b = 20;                   // 대입 연산(=)
	sum = a + b;              // 더하기 연산(+) 후 대입 연산(=) : 30
	sub = a - b;              // 빼기 연산(-) 후 대입 연산(=) :-10
	mul = a * b;              // 곱하기 연산(*) 후 대입 연산(=) : 200
	inv = -a;                 // 음수 연산(-) 후 대입 연산(=) : -10

	printf("a의 값 : %d, b의 값 : %d\n", a, b); // a의 값 : 10, b의 값 : 20 
	printf("덧셈 : %d\n", sum); // 덧셈 : 30 
	printf("뺄셈 : %d\n", sub); // 뺄셈 : -10
	printf("곱셈 : %d\n", mul); // 곱셈 : 200
	printf("a의 음수 연산 : %d\n", inv); // a의 음수 연산 : -10

	return 0;
}