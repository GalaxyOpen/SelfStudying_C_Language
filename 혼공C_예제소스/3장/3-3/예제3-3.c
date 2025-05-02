#include <stdio.h>

int main(void)
{
	short sh = 32767;                     // short형의 최댓값 초기화
	int in = 2147483647;                  // int형의 최댓값 초기화
	long ln = 2147483647;                 // long형의 최댓값 초기화
	long long lln = 123451234512345;      // 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);   // long long형은 lld로 출력

	return 0;
}

// 각 자료형은 저장 값의 범위가 다르긴 하지만 출력할 때에는 모두 %d 를 사용함. 
// long형은 소문자 l을 붙여서 %ld, long long 형은 l을 총 2개 붙여서 %lld로 사용함. 