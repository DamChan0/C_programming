#include  <stdlib.h>
#pragma pack(1)
typedef struct a
{
  	unsigned char a1 : 8;
  
    int b : 8;
    int d : 8;
    int e : 8;
	
	
}ab;

int main()
{
    ab a12 = NULL;
   int aaa= sizeof(a12);
}