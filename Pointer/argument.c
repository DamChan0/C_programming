#include <stdio.h>

void local(int);

int main(void)

{

    int value_var = 10;

    printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", value_var);

    value_local(value_var);

    printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", value_var);


    int reference_var = 10;

    printf("���� reference_var �ʱ갪�� %d�Դϴ�.\n", reference_var);

    reference_local(&reference_var);

    printf("reference_local() �Լ� ȣ�� �� ���� reference_var ���� %d�Դϴ�.\n", reference_var);



    int num = 10; // ���� ����

    int *ptr_num = &num; // ������ ����

    int **pptr_num = &ptr_num; // �������� ������ ����

    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);

    printf("������  ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num);

    printf("�������� ������ pptr_num�� ����Ű�� �ּҿ� ����� �����Ͱ� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", **pptr_num);


    int num2 = 10; // ���� ����

    void *ptr_num = &num2; // void ������ ����

    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num2);

    printf("void ������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *(int *)ptr_num);

    *(int *)ptr_num = 20; // void �����͸� ���� �޸� ����

    printf("void ������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *(int *)ptr_num);

    return 0;
}

void value_local(int num)

{

    num += 10;
}

void reference_local(int *num)

{

    *num += 10;
}