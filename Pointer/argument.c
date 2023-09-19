#include <stdio.h>

void local(int);

int main(void)

{

    int value_var = 10;

    printf("변수 var의 초깃값은 %d입니다.\n", value_var);

    value_local(value_var);

    printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", value_var);


    int reference_var = 10;

    printf("변수 reference_var 초깃값은 %d입니다.\n", reference_var);

    reference_local(&reference_var);

    printf("reference_local() 함수 호출 후 변수 reference_var 값은 %d입니다.\n", reference_var);



    int num = 10; // 변수 선언

    int *ptr_num = &num; // 포인터 선언

    int **pptr_num = &ptr_num; // 포인터의 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);

    printf("포인터  ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);

    printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n", **pptr_num);


    int num2 = 10; // 변수 선언

    void *ptr_num = &num2; // void 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num2);

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

    *(int *)ptr_num = 20; // void 포인터를 통한 메모리 접근

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

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