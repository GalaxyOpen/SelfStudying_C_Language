#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);                 // 처음 호출하므로 1을 인수로 준다.

	return 0;
}

void fruit(int count)         // 호출 횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return;   // 호출 횟수가 3이면 반환하고 끝낸다.
	fruit(count + 1);         // 재호출할 때 호출 횟수를 1 증가
	printf("jam\n");
}

// 재귀호출과 반복문의 차이 
// 재귀 호출 이후 17행에 출력을 하나 더 넣음(jam). 15행의 return 문이 최초 호출한 main 함수로 돌아간다면 17행이 실행되면 안되지만 17행이 실행되고
// apple 은 3번, jam 은 2번 실행이 됨. 
// 이유 : 재귀호출 함수는 최초 호출한 곳이 아니라, 이전에 호출했던 곳으로 돌아감. 
// 경우에 따라서는 복잡한 반복문을 간단히 표현할 순 있지만 코드 읽기가 쉽지 않고 반복 호출되면서 메모리를 쓰므로 제한적으로 쓰는 것이 좋음. 