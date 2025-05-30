#include <stdio.h>

int main(void)
{
	printf("Be happy\n");              // "Be happy"를 출력하고 줄을 바꿈(\n)
	printf("12345678901234567890\n");  // 화면에 열 번호 출력하고 줄을 바꿈(\n)
	printf("My\tfriend\n");            // "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
	printf("Goot\bd\tchance\n");       // "Goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
	printf("Cow\rW\a\n");              // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)

	return 0;
}

// 제어 문자 : 문자는 아니지만 출력 방식에 영향을 주는 문자. 
// \n : (new line)줄바꿈 
// \t : (tab)탭누른 거리만큼 띄움
// \b : (backspace)한 칸 앞으로 이동 
// \r : (carriage return)맨 앞으로 이동
// \a : (alert) 경보
// 