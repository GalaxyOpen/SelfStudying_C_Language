#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6);         // 지수 형태의 실수를 소수점 형태로 출력 1000000.0
	printf("%.7lf\n", 3.14e-5);     // 소수점 이하 7자리까지 출력 0.0000314
	printf("%le\n", 0.0000314);     // 소수점 형태의 실수를 지수 형태로 출력 3.140000e-05
	printf("%.2le\n", 0.0000314);   // 지수 형태로 소수점 이하 둘째 자리까지 출력 3.14e-05

	return 0;
}

// 5행의 1e6를 .lf 형식으로 표현 : 상수 1000000.0을 지수 형태로 표현. (10의 6제곱)
// 6행의 3.14e-5를 .7lf 형식으로 표현(소수점 이하 7자리까지 표현) : 3.14 x 10의 -5제곱을 한 것과 같다. 
// 7행의 0.0000314를 le 형식으로 표현 : 소수점 형태의 실수를 지수 형태로 출력함. 3.140000e-05(원래 이 함수들은 6째짜리까지 표현하는 것으로 보임.) 
// 8행의 0.0000314를 .2le 형식으로 표현 : 좀 더 보기 좋게 3.14e-05 형식으로 무의미한 숫자들을 줄여 표현. 