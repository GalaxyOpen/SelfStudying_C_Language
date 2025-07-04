#include <stdio.h>

void swap(void);                   // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
	int a = 10, b = 20;            // 변수 선언과 초기화

	swap();                        // 인수 없이 함수 호출
	printf("a:%d, b:%d\n", a, b);  // 변수 a, b 출력

	return 0;
}

void swap(void)                    // 인수가 없으므로 매개변수도 없음
{
	int temp;                      // 교환을 위한 변수

	temp = a;                      // temp에 main 함수의 a 값 저장
	a = b;                         // main 함수의 a에 main 함수의 b 값 저장
	b = temp;                      // main 함수의 b에 temp 값 저장
}

// swap 함수에서는 a와 b가 정의되어 있지 않음.  
// 지역 변수는 함수 외부에서 접근이 불가능함. 
// 그렇기 때문에 다른 방식으로 변경해줘야 함. 