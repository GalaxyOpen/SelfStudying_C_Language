// const 사용해보기. const로 선언한 변수는 그 값을 바꿀 수 없다. 
#include <stdio.h>

int main(void)
{
	int income = 0;                   // 소득액 초기화
	double tax;                       // 세금
	const double tax_rate = 0.12;     // 세율 초기화
	
	income = 456;                     // 소득액 저장
	tax = income * tax_rate;          // 세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}

// 즉, 처음 선언할 때 값을 지정(초기화)해줘야만 한다. 