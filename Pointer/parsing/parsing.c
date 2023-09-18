#include <stdio.h>
#pragma pack(1)
typedef struct lidarData
{
	unsigned int
     encoder_cnt0 : 8;

} lidarData_t;

typedef union ParsingData
{
	lidarData_t data[4];
	unsigned int bytes;
} parsingData_t;
void main()
{
    	parsingData_t parsingData;
			parsingData.data[0].encoder_cnt0 = 0b00000100 ;
			parsingData.data[1].encoder_cnt0 = 0b00011000 ;
			parsingData.data[2].encoder_cnt0 = 0b00000000;
			parsingData.data[3].encoder_cnt0 = 0b00000000;
    // printf("%d\n",data.data.encoder_cnt);
    // printf("%d\n",sizeof(parsingData.bytes));
    printf("%d\n",sizeof(parsingData.data));
    printf("%d\n",sizeof(parsingData));
    printf("%d\n",sizeof(parsingData.bytes));


    printf("%02x\n",parsingData.bytes);
   int a = 0b11111111111111011111101111110111;

}
