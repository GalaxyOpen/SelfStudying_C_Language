#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)		// rank의 값이 얼마인지 확인
	{
	case 1:				// rank가 1이면
		m = 300;		// m = 300을 수행하고
		break;			// 블록을 벗어나 22행으로 이동
	case 2:				// rank가 2면
		m = 200;		// m = 200을 수행하고
		break;			// 블록을 벗어나 22행으로 이동
	case 3:				// rank가 3이면
		m = 100;		// m = 100을 수행하고
		break;			// 블록을 벗어나 22행으로 이동
	default:			// rank와 일치하는 case의 값이 없으면
		m = 10;			// m = 10을 수행하고
		break;			// 블록을 벗어나 22행으로 이동
	}

	printf("m : %d\n", m);

	return 0;
}

// switch case 구문 
// 첫 5행에서 rank에 2값을 입력. m=0 
// case 1: -> rank라는 변수에 들어가 있는 값이 1이면 
// m = 300 -> 0이었던 m 값을 300으로 바꾸고 break : switch 구문 밖으로 이동. 
// case 2: -> rank라는 변수에 들어가 있는 값이 2면 
// m = 200 -> 0이었던 m 값을 200으로 바꾸고 break : switch 구문 밖으로 이동. 
// case 3: -> rank라는 변수에 들어가 있는 값이 3이면
// m = 100 -> 0이었던 m 값을 100으로 바꾸고 break : switch 구문 밖으로 이동. 
// default : 위의 모든 case에 해당하는 값이 없다면 
// m = 10 -> 0이었던 m 값을 10으로 바꾸고 break : switch 구문 밖으로 이동. 
// m : 200 이 출력됨.  