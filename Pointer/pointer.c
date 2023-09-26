#include <stdio.h>
#include <assert.h>

void decompose(double x, long* out_int_part, double* out_frac_part)
{
    /* 역자 추가한 부분 시작 */
    assert(out_int_part != NULL);
    assert(out_frac_part != NULL);
    /* 역자 추가한 부분 끝 */

    *out_int_part = (long) x;
    *out_frac_part = x - *out_int_part;
}


int main(void)
{
	int num01 = 1234;

	int* ptr_num01 = &num01;
	int* pptr_num01 = ptr_num01;

	
	printf("포인터의 크기는 %d입니다.\n", sizeof(ptr_num01));
	printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	*ptr_num01 = 3.141592;
	printf("\n\n");
	printf("*ptr_num01 = 3.141592 으로 num01 값이 변경됨\n");
	printf("*ptr_num01 값 변경 후 num01이 가리키고 있는 주소값은 %#x입니다.\n", &num01);
	printf("*ptr_num01 값 변경 후 포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);


	printf("*ptr_num01 값 변경 후 포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("*ptr_num01 값 변경 후 num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", num01);

	printf("\n\n");
	printf("포인터를 매개변수로 call by reference\n");
	long i = 0;
	double j = 0;
	decompose(3.14159, &i, &j);
	printf("분해된 num01 정수부 :%d 가수부: %f 입니다.\n", i, j);
	return 0;
}
