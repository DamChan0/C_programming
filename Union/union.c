#include <stdio.h>

typedef union
{
  unsigned int  a;
  
   struct vueron {
    unsigned int a : 3;
    unsigned int b : 3;
    unsigned int c : 2;
    unsigned int d : 5;
    unsigned int e : 3;


  }vueron_t;
}SHAREDATA;

int main(void)
{
 SHAREDATA var;
 
}
