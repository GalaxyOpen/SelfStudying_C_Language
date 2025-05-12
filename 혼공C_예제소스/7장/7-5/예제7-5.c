#include <stdio.h>

void fruit(void);			// 함수 선언

int main(void)
{
	fruit();				// 함수 호출

	return 0;
}

void fruit(void)			// 재귀호출 함수 정의
{
	printf("apple\n");
	fruit();				// 자신을 다시 호출
} 

// 재귀 호출 함수(reculsive call function) : 자기 자신을 호출하는 함수 
// 위 코드는 간단하게 apple을 출력하는 재귀 호출 함수. 
// 12행이 재귀호출 함수를 정의한 부분. fruit 함수는 14행을 수행한 후에 15행에서 자신을 다시 호출함. 
// 함수가 모든 명령을 수행하면 자동으로 반환하는데 자신을 호출하므로 다시 처음부터 시작. 
// 당연히 실행 결과는 계속 apple을 출력하다가 종료됨. 