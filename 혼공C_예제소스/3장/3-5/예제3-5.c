#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;              // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);    // 소수점 이하 20자리까지 출력 1.23456788063049316406
	printf("double형 변수의 값 : %.20lf\n", db); // 출력 : 1.23456789012345669043

	return 0;
}

// remind : .20f // 소수점 이하 20자리까지 출력
// double형 변수 값을 20자리까지 출력  
// 실제 출력 값과 다른 이유 
// 실수형은 저장하는 값에 따라 숫자가 정확하게 표현될수도 있고 그렇지 않을수도 있음. 
// 이렇게 값이 달라지는 이유는 컴퓨터에서 실수를 표현하는 방식이 오차를 가지고 있기 때문. 
// float은 보통 7자리, double은 보통 15자리 범위 내 값을 사용하는 것을 추천.

/* 정리 
1. 정수형을 기본으로 사용하고 실수형은 꼭 필요한 경우만 사용함.
2. 실수형은 유효숫자가 많은 double형을 기본으로 사용함.
*/