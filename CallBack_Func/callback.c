#include <stdio.h>

typedef void (*user_print)(void);  // callback function 원형

void setPrintCallback(user_print); // callback 함수 설정

void userFunc(void); // callback 함수

void useCallback(void); // callback 함수 호출


user_print userCallbackFunc = NULL; // callback 함수 선언 및 초기화

int main(void)
{
   
    printf("callback function 설정 전\n");
    useCallback();


    setPrintCallback(userFunc); // callback 함수 설정

    printf("callback 함수가 설정되었습니다.\n");
    useCallback();

    return 0;
}

//  callback 함수 설정 함수
void setPrintCallback(user_print fp)
{
    userCallbackFunc = fp;
}

// 사용자 정의 함수
void userFunc(void)
{
    printf("콜백 함수를 실행합니다. \n");
    printf("made by. 김동민 system team \n\n안녕히가세요\n");
}

// callback 함수 호출 함수
void useCallback(void)
{
    if (userCallbackFunc) 
    {
        userCallbackFunc();
    }
    else
    {
        printf("callback function을 설정하세요\n\n");
    }
}