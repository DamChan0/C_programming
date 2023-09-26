#include <stdio.h>
#include <assert.h>

void decompose(double x, long* out_int_part, double* out_frac_part)
{
    /* ���� �߰��� �κ� ���� */
    assert(out_int_part != NULL);
    assert(out_frac_part != NULL);
    /* ���� �߰��� �κ� �� */

    *out_int_part = (long) x;
    *out_frac_part = x - *out_int_part;
}


int main(void)
{
	int num01 = 1234;

	int* ptr_num01 = &num01;
	int* pptr_num01 = ptr_num01;

	
	printf("�������� ũ��� %d�Դϴ�.\n", sizeof(ptr_num01));
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	*ptr_num01 = 3.141592;
	printf("\n\n");
	printf("*ptr_num01 = 3.141592 ���� num01 ���� �����\n");
	printf("*ptr_num01 �� ���� �� num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", &num01);
	printf("*ptr_num01 �� ���� �� ������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);


	printf("*ptr_num01 �� ���� �� ������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	printf("*ptr_num01 �� ���� �� num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", num01);

	printf("\n\n");
	printf("�����͸� �Ű������� call by reference\n");
	long i = 0;
	double j = 0;
	decompose(3.14159, &i, &j);
	printf("���ص� num01 ������ :%d ������: %f �Դϴ�.\n", i, j);
	return 0;
}
