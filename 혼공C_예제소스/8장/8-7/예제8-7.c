#include <stdio.h>

int main(void)
{
	char str[5]; // 5행 쓰레기 값이 남아 있음. 

	str[0] = 'O'; // O 값으로 초기화 
	str[1] = 'K'; // K 값으로 초기화 
	printf("%s\n", str); // OK 값 이후에 나타나면 빈 값이 있기 때문에 그 값들은 쓰레기 값이 출력됨. 

	return 0;
}