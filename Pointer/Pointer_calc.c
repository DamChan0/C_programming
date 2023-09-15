#include <stdio.h>

int main(void)
{
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	
	printf("포인터   ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터    ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);
	
	printf("포인터   ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	// printf("포인터    ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
	// printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);
    int ptr_int2 = ptr_int +1 ;
    int ptr_double2 = ptr_double +1 ;
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n",  ptr_double2 -ptr_int2 );
	
	
	return 0;
}

