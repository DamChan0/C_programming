#include <stdio.h>

int main(void)
{
	int num01 = 1234;
	int num02 = 333;
	
	int* ptr_num01 = &num01;
	int* ptr_num02 = &num02;
	
	printf("포인터의 크기는 %d입니다.\n", sizeof(ptr_num01));
	printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
	printf("포인터 ptr_num02가 가리키고 있는 주소값은 %#x입니다.\n", ptr_num02);
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num02);
	return 0;
}
