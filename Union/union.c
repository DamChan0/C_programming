#include <stdio.h>

typedef union
{
  unsigned char a;
  unsigned char b;
   double c;
  int d;
}SHAREDATA;

int main(void)
{
 SHAREDATA var;
 var.d=0x87654321;

 printf("¾È³ç%x\n",var.a);
 printf("%x\n",var.b);
 printf("%x\n",var.c);
 return 0;
}
