#include <stdio.h>

int get_num(void);                    // 함수 선언

int main(void)
{
	int result;

	result = get_num();               // 함수 호출, 반환값은 result에 저장
	printf("반환값 : %d\n", result);  // 반환값 출력
	return 0;
}

int get_num(void)                     // 매개변수가 없고 반환형만 있다.
{
	int num;                          // 키보드 입력값을 저장할 변수

	printf("양수 입력 : ");           // 입력 안내 메시지
	scanf("%d", &num);                // 키보드 입력

	return num;                       // 입력한 값 반환
}

// int get_num(void); => get_num이라는 이름의 함수가 있고, 매개변수는 없으며 int형 값을 반환한다고 선언한다.
// int main(void) => 프로그램의 시작점인 main 함수를 정의한다. 반환형은 int이며 매개변수는 없다.

// int result; => int형 변수 result를 선언한다. 반환값을 저장할 용도로 사용된다.

// result = get_num(); => get_num 함수를 호출하고 **반환값**을 result 변수에 **저장**한다.
// printf("반환값 : %d\n", result); => result 변수에 저장된 값을 "반환값 : "이라는 문자열과 함께 출력한다.

// int get_num(void) => get_num 함수를 정의한다. 매개변수는 없고 int형 값을 반환한다.
// int num; => int형 변수 num을 선언한다. 입력된 값을 저장하는 용도로 사용된다.

// printf("양수 입력 : "); => "양수 입력 : "이라는 문자열을 출력하여 사용자에게 입력을 안내한다.
// scanf("%d", &num); => 사용자로부터 정수를 입력받아 num 변수에 저장한다.

// (주의) return num; => 사용자로부터 정수를 입력받아 num 변수에 저장한다.

/* 결과 */
// 이에 따라 나타나는 출력은 입력한 양수 값이 된다. 
// 음수도 넣으면 출력은 되긴한다. 
// 단, 문자열을 넣을 경우 정상적이지 않은 쓰레기 값이 출력된다(num에 문자가 들어가지 않고 쓰레기값이 들어가기 때문)