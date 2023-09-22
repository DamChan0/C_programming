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

// setter for callback function
void setPrintCallback(user_print fp)
{
    userCallbackFunc = fp;
}

// user function
void userFunc(void)
{
    printf("�ݹ� �Լ��� �����մϴ�. \n");
    printf("made by. �赿�� system team \n\n�ȳ���������\n");
}

// use callback function
void useCallback(void)
{
    if (userCallbackFunc) // check if a callback function has registered
    {
        userCallbackFunc();
    }
    else
    {
        printf("callback function�� �����ϼ���\n\n");
    }
}