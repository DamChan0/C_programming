#include <stdio.h>
typedef struct tests
{
    /* data */
    int q[10];
}tests_t;


typedef union  test{
    int n;
    double a;
};

void main(){
    union test t;
    t.n = 10;
    printf("%d\n",t.n);

    t.a = 10.0;
    printf("n = %d\n",t.n);
    printf("a = %f\n",t.a);
}