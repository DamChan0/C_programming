#include <stdio.h>

#pragma pack(push, 1)
typedef struct vueron1
{
    /* data */
    int people;
    char people_name[100];
    char a;
} vueron_t1;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct tests1
{
    vueron_t1 vueronPeople;
    /* data */
    int num;
    
    char a;

} tests_t1;
#pragma pack(pop)

typedef struct vueron2
{
    /* data */
    int people;
    char people_name[100];
    char a;
} vueron_t2;

typedef struct tests2

{
    vueron_t2 vueronPeople;
    /* data */
    int num;

    char a;

} tests_t2;

void main()
{

    vueron_t1 vueron1;
    vueron_t2 vueron2;
    printf("sizeof(vueron_t): %d\n", sizeof(vueron_t1));
    printf("sizeof(vueron1.a): %d\n", sizeof(vueron1.a));
    printf("sizeof(tests_t1): %d\n", sizeof(tests_t1));
    printf("sizeof(vueron_t): %d\n", sizeof(vueron_t2));
    printf("sizeof(vueron2.a): %d\n", sizeof(vueron2.a));
    printf("sizeof(tests_t2): %d\n", sizeof(tests_t2));
}