#include <stdio.h>

int main(void)
{
	char str[80] = "applejam";              // 문자열 초기화

	printf("최초 문자열 : % s\n", str);     // 초기화 문자열 출력
	printf("문자열 입력 : ");
	scanf("%s", str);                       // 새로운 문자열 입력
	printf("입력 후 문자열 : %s\n", str);   // 입력된 문자열 출력

	return 0;
}

// char str[80] = "applejam"; 여기서 보면 applejam의 문자는 총 8개이지만 Null 문자를 저장하기 위해 필요함. 
// Null 문자의 용도 : 초기화된 문자들은 배열의 처음부터 저장되어 문자열을 만듬. 남은 배열 요소는 자동으로 0이 채워짐. 
// 여기서 0을 Null 문자라고 칭함. 상수로는 \0
// printf 함수는 char 형 배열에서 Null 문자가 나올 때까지만 출력하도록 만들어졌음. 
// 이러한 규칙은 문자열을 처리하는 모든 함수에 적용되며 scanf 함수로 문자열을 입력받을 때도 어김없이 Null 문자가 사용됨. 