#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry";               // char 배열 선언과 문자열 초기화 ex) char 배열명[문자열길이+1] = 문자열
	
	printf("딸기 : %s\n", fruit);                // 배열명으로 저장된 문자열 출력 = 딸기 : strawberry
	printf("딸기쨈 : %s %s\n", fruit, "jam");    // 문자열 상수를 직접 %s로 출력 = 딸기쨈 : strawberry jam

	return 0;
}

// 5행에서 strawberry 는 10자이므로 fruit 배열의 크기는 최소한 11보다 커야 함. 
// 이런 char 배열은 문자열을 저장하는 변수의 역할을 하며, %s 출력함. 