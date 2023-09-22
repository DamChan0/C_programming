#include <stdio.h>

unsigned char  binary_data[50] = {
    0b01000010, 0b01100101, 0b01101001, 0b01101110, 0b01100111, 
    0b01010100, 0b01110010, 0b01100001, 0b01101110, 0b01110011, 
    0b01100001, 0b01110100, 0b01101001, 0b01101111, 0b01101110, 
    0b01001111, 0b01100110, 0b00100000, 0b01000100, 0b01100001, 
    0b01100001, 0b00100000, 0b00111000, 0b00111000, 0b00101100, 
    0b01110011, 0b01101111, 0b01101111, 0b01101110, 0b00100000, 
    0b01110010, 0b01100101, 0b00100000, 0b01110100, 0b01101000, 
    0b00100000, 0b01001100, 0b01100001, 0b01110011, 0b01110100, 
    0b00110100, 0b00110011, 0b00101100, 0b00100000, 0b01000001, 
    0b01100100, 0b00100000, 0b01010100, 0b01101000, 0b01100101, 
    };

typedef struct DataParsing
{
  	unsigned char a :4;
	unsigned char b: 4;
	unsigned char c: 3;
	unsigned char d: 5;
	unsigned char e: 6;
}data;


int main()
{
    
    int list[5] = {0};
   
    for( int i = 0 ; i<50 ; i= i+5)
    {
        int (*list)[5] = binary_data + i;

    data* binary_parsing =  (data*)*(list);
    printf("a = %d\n",binary_parsing->a);
    printf("b = %d\n",binary_parsing->b);
    printf("c =%d\n",binary_parsing->c);
    printf("d =%d\n",binary_parsing->d);
    printf("e =%d\n\n",binary_parsing->e);
    
    }


    printf("%d\n", sizeof(data));
    return 0;
}