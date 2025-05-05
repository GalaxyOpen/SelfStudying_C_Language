#include <stdio.h>

int main(void)
{
	char grade;               // 학점을 입력할 변수
	char name[20];            // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade);      // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);        // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}

// 응용편 2
// 학점을 입력할 변수와 이름을 입력할 배열을 선언하고 
// scanf로 각각 학점과 이름을 입력 받음. 
// 여기서 주의할점은 배열(문자열)에는 &를 사용하지 않음. 
// 당연하지만 변수를 출력할 때는 %s, 문자열을 출력할 때는 %c를 사용함. 