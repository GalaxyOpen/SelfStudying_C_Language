#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);       // 여기서 변수 a에 값 입력
	printf("입력된 값 : %d\n", a);  // 입력한 값 출력

	return 0;
}

// scanf() : 내가 입력한 값을 출력한다. 변수가 같이 올 경우, 변수 앞에 &를 붙이는 것을 잊지 말자. 
// 초기화가 되지 않은 a에는 내가 입력한 값이 출력된다. 