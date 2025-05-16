#include <stdio.h>
#include <string.h>            // 문자열 관련 함수 원형을 모아놓은 헤더 파일

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");     // str1 배열에 "tiger" 복사
	strcpy(str2, str1);        // str2 배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}

// 문자열 대입 
// 문자열의 길이가 다른 경우 일반 변수처럼 대입 연산자를 사용할 수 없으며, 보통 이런 경우 strcpy 함수를 사용함. 
// #include <string.h> << 이 코드는 strcpy 함수를 사용하기 위한 헤더 파일. 
// 보통 strcpy 함수 기본 사용 법은 strcpy (저장될 배열명, 저장할 문자열); 로 씀. 