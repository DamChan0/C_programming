#include <stdio.h>
typedef struct vueron1
{
    /* data */
    int people;
    char people_name[100];
    char a;
}vueron_t1;


typedef struct tests1
{
    vueron_t1 vueronPeople;
    /* data */
    int num;
    char a;
    
}tests_t1;


void main(){
    vueron_t1 vueron1;


   printf("sizeof(vueron_t): %d\n",sizeof(vueron_t1));
    printf("sizeof(vueron1.a): %d\n",sizeof(vueron1.a)); // char 자체는 1이지만 패딩 바이트 3이 추가되어 test_t1 은 108 + 4(int) + 4(char + 3) = 116 가됨
    printf("sizeof(tests_t1): %d\n",sizeof(tests_t1));

}