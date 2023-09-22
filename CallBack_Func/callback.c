#include <stdio.h>

typedef void (*user_print)(void);  // callback function ����

void setPrintCallback(user_print); // callback �Լ� ����

void userFunc(void); // callback �Լ�

void useCallback(void); // callback �Լ� ȣ��


user_print userCallbackFunc = NULL; // callback �Լ� ���� �� �ʱ�ȭ

int main(void)
{
   
    printf("callback function ���� ��\n");
    useCallback();


    setPrintCallback(userFunc); // callback �Լ� ����

    printf("callback �Լ��� �����Ǿ����ϴ�.\n");
    useCallback();

    return 0;
}

//  callback �Լ� ���� �Լ�
void setPrintCallback(user_print fp)
{
    userCallbackFunc = fp;
}

// ����� ���� �Լ�
void userFunc(void)
{
    printf("�ݹ� �Լ��� �����մϴ�. \n");
    printf("made by. �赿�� system team \n\n�ȳ���������\n");
}

// callback �Լ� ȣ�� �Լ�
void useCallback(void)
{
    if (userCallbackFunc) 
    {
        userCallbackFunc();
    }
    else
    {
        printf("callback function�� �����ϼ���\n\n");
    }
}