#include <stdio.h>
typedef struct lidarData2
{
	unsigned char range_mm8 : 8;
	// unsigned char range_mm4 : 4;


} rangeData2_t;

typedef struct lidarData3
{
	unsigned char range_mm4 : 4;

} rangeData3_t;

typedef union ParsingData2
{
    rangeData3_t data4[2];
	rangeData2_t data8[2];
	unsigned int bytes;
} RangeParsing;

void main(void)
{
RangeParsing rangeu;
    rangeu.data4[1].range_mm4 = 0b11
    000000;
    rangeu.data4[0].range_mm4 = 0b00000111;
    rangeu.data8[1].range_mm8 = 0b00001111;
    rangeu.data8[0].range_mm8 = 0b00000001;

float a= rangeu.bytes;
printf("%d\n", sizeof(rangeu.data4));
printf("%d\n", sizeof(rangeu.data8));
printf("%d\n", sizeof(rangeu));
printf("%02x\n",  rangeu.data4[0].range_mm4);
printf("%f\n",a );
}

