#include <stdio.h>

int sum(int x, int y);       // sum 함수 선언 : 186쪽에서 설명합니다.

int main(void)               // main 함수 시작
{
	int a = 10, b = 20;
	int result;              // 두 정수를 더한 결과(result)를 저장할 변수

	result = sum(a, b);      // sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}                            // main 함수의 끝

int sum(int x, int y)        // sum 함수 정의 시작
{
	int temp;                // 두 정수의 합을 잠시 저장할 변수

	temp = x + y;            // x와 y의 합을 temp에 보관

	return temp;             // temp의 값을 반환
}

// 7장 함수 
// printf나 scanf 함수처럼 특정 기능을 미리 약속하고 프로그램에서 바로 사용할 수 있게 구현된 함수를 표준 라이브러리 함수라고 함. 
// 함수를 만들려면 3가지가 중요함. 
// 1. 함수 정의 : 함수를 실제 코드로 만드는 것이며 기능을 구현. 
// 2. 함수 호출 : 호출을 해야 함수 사용이 가능 
// 3. 함수 선언 : 프로그램의 상단에서 어떤 함수를 사용할 것이라고 컴파일러에 정보를 주는 역할을 함. 

// 6장까지는 main 함수 하나만 만들어서 썼음. 앞으로는 또다른 함수를 만들면서 진행하게 됨. 