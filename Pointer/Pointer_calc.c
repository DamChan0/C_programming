#include <stdio.h>

int a[1000] = {0};
char b[1000] = {0};

int main(void)
{
	char *ptr_char = 0;
	int *ptr_int = NULL;
	double *ptr_double = 0x0000000;

	printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
	printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
	printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);

	int ptr_int2 = ptr_int + 1;
	int ptr_double2 = ptr_double + 1;
	printf("������ ptr_char�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_char);
	printf("������ ptr_int�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int2);
	printf("������ ptr_double�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double2);

	printf("�迭 a+1�� �ּ� ���� %#x�Դϴ�.\n", (a + 1));
	printf("�迭 a+2�� �ּ� ���� %#x�Դϴ�.\n", (a + 2));			// a�� Ÿ���� int ũ�⸸ŭ ���� 
	printf("�迭 b+1�� �ּ� ���� %#x�Դϴ�.\n", (b + 1));		
	printf("�迭 b+2�� �ּ� ���� %#x�Դϴ�.\n", (b + 2));			// b�� Ÿ���� char ũ�⸸ŭ ���� 

	return 0;
}
