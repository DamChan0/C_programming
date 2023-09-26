#include <stdio.h>

unsigned char  binary_data[48] = {
    0b01000010, 0b01100101, 0b01101001, 0b01101110, 0b01100111, 
    0b01010100, 0b01110010, 0b01100001, 0b01101110, 0b01110011, 
    0b01100001, 0b01110100, 0b01101001, 0b01101111, 0b01101110, 
    0b01001111, 0b01100110, 0b00100000, 0b01000100, 0b01100001, 
    0b01100001, 0b00100000, 0b00111000, 0b00111000, 0b00101100, 
    0b01110011, 0b01101111, 0b01101111, 0b01101110, 0b00100000, 
    0b01110010, 0b01100101, 0b00100000, 0b01110100, 0b01101000, 
    0b00100000, 0b01001100, 0b01100001, 0b01110011, 0b01110100, 
    0b00110100, 0b00110011, 0b00101100, 0b00100000, 0b01000001, 
    0b01100100, 0b00100000, 0b01010100,  
    };
#pragma pack(1)
typedef struct DataParsing
{
  	unsigned char a1 :4;
  	unsigned char a2 :4;

	unsigned char b1 ;


	unsigned char c1: 2;
	unsigned char c2: 6;
    
	unsigned char d1 ;
	
	
}data;

    typedef struct a
    {
        unsigned char a1 : 8;
    
        int b : 8;
        int d : 8;
        int e : 8;
        
        
    }ab;

    int main()
    {
        ab a12;
    int aaa= sizeof(a12);
    data* binary_parsing =  (data*)binary_data;
    
    for(int i = 0; i < 12; i++){
    printf("a1 = %d\n",binary_parsing[i].a1);
    printf("a2 = %d\n",binary_parsing[i].a2);
    printf("b1 =%d\n",binary_parsing[i].b1);
    printf("c1 =%d\n",binary_parsing[i].c1);
    printf("c2 =%d\n",binary_parsing[i].c2);
    printf("d1 =%d\n\n",binary_parsing[i].d1);
    }



    printf("%d\n", sizeof(data));
    return 0;
}