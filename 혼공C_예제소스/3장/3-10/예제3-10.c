#include <stdio.h>

int main(void)
{
	int age;                               // 나이는 정수형
	double height;                         // 키는 실수형

	printf("나이와 키를 입력하세요 : ");   // 입력 안내 메시지 출력
	scanf("%d%lf", &age, &height);         // 나이와 키를 함께 입력
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);   // 입력값 출력

	return 0;
}

// 응용편
// 보통 나이에는 실수형 int를 썼고, 키는 실수형인 double을 썼음. 
// 다음엔 scanf() 를 통해 나이와 키를 입력 받았고
// printf()로 나이와 키를 출력함. 키는 소수 첫째짜리 까지 반올림. 