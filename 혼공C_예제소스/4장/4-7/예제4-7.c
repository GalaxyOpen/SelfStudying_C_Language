// 연산 결과값을 처리하는 방법.
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b;                                  // 변수에 저장하지 않는다면 연산 결과는 버려짐
	printf("%d + %d = %d\n", a, b, a + b);  // 연산 결과를 바로 출력에만 사용

	res = a + b;                            // 연산 결과를 변수에 저장히먄
	printf("%d + %d = %d\n", a, b, res);    // 저장된 값을 계속 사용할 수 있음.

	return 0;
}