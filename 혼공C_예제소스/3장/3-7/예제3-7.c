#include <stdio.h>
#include <string.h>                  // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
	char fruit[20] = "strawberry";   // strawberry로 초기화

	printf("%s\n", fruit);           // strawberry 출력
	strcpy(fruit, "banana");         // fruit에 banana 복사
	printf("%s\n", fruit);           // banana 출력

	return 0;
}

// 시작하기 전에 : 선언에 따라 크기가 달라지는 char 배열은 대입 연산자(=)을 사용할 수 없음. 
// 또한, 배열명은 주소 상수 이므로 변수만 가능한 대입 연산자 왼쪽에 쓸 수 없음. 
// 그래서 위에서 썻던 strcpy 함수를 사용하여 char 배열에 초기화 이외에 문자열을 저장함. 
// 그래서 위에는 #include <string.h> 를 선언해줘야 함. 