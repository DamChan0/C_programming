#include <stdio.h>

int main(void)
{
	int num01 = 1234;
	int num02 = 333;
	
	int* ptr_num01 = &num01;
	int* ptr_num02 = &num02;
	
	printf("�������� ũ��� %d�Դϴ�.\n", sizeof(ptr_num01));
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num02);
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num02);
	return 0;
}
