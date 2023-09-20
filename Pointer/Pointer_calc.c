#include <stdio.h>

int a[1000] = {0};
char b[1000] = {0};

int main(void)
{
	char *ptr_char = 0;
	int *ptr_int = NULL;
	double *ptr_double = 0x0000000;

	printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);

	int ptr_int2 = ptr_int + 1;
	int ptr_double2 = ptr_double + 1;
	printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ptr_int2);
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ptr_double2);

	printf("배열 a+1의 주소 값은 %#x입니다.\n", (a + 1));
	printf("배열 a+2의 주소 값은 %#x입니다.\n", (a + 2));			// a의 타입인 int 크기만큼 증가 
	printf("배열 b+1의 주소 값은 %#x입니다.\n", (b + 1));		
	printf("배열 b+2의 주소 값은 %#x입니다.\n", (b + 2));			// b의 타입인 char 크기만큼 증가 

	return 0;
}
