#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A');                        // 문자 상수 출력
	printf("%s\n", "A");                        // 문자열 상수 출력
	printf("%c은 %s입니다.\n", '1', "first");   // 문자(%c)와 문자열(%s)을 함께 출력

	return 0;
}

// %c : 문자 상수를 출력할 때 사용. 
// %s : 문자열 상수를 출력할 때 사용. 