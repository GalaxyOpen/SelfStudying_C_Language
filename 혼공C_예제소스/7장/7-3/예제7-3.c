#include <stdio.h>

void print_char(char ch, int count);    // 함수 선언

int main(void)
{
	print_char('@', 5);                 // 문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int count)     // 매개변수는 있으나 반환형은 없다.
{
	int i;

	for (i = 0; i < count; i++)         // i는 0부터 count-1까지 증가, count번 반복
	{
		printf("%c", ch);               // 매개변수 ch에 받은 문자 출력
	}

	return;
}

// 반환값이 없는 함수 
// print_char 함수는 화면에 출력한 내용이 함수가 수행한 결과이므로 호출한 곳으로 특별히 값을 반환할 필요가 없다. 
// 방식은 함수명 앞에 void를 쓰면 된다. 
// 근데 return ; 이렇게 써도 되고 생략해도 된다. 
// 추가로, 함수 실행 중간에 돌아가야 한다면 return문을 쓸 수 있는데, int i; 아랫 줄에 if (count > 10) return; 구문을 넣으면 된다. 
