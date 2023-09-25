#include <stdio.h>
#include <string.h>

typedef union vueron
{
    unsigned char a;
    unsigned short b;
    int c;
} vueron_t;

typedef union binaryData
{
    unsigned int i : 16;
    unsigned int f : 8;
    double d;
    char bytes[8];
} binaryData_t;
unsigned char binaryValue[8] = {0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF};

int main(void)
{
    binaryData_t binarydata;
    binarydata.d = 0;

    memcpy(binarydata.bytes, binaryValue, sizeof(binaryValue));

    printf("union NetworkData 의 크기 : %d\n", sizeof(binarydata));
    printf("binarydata.i : %d\n", binarydata.i);      // 다른 멤버지만 같은 메모리에 접근할 수 있다.
    printf("binarydata.f : %d\n", binarydata.f);      // 다른 멤버지만 같은 메모리 접근할 수 있다.
    printf("binarydata.d : %d\n", binarydata.d);      // 다른 멤버지만 같은 메모리 접근할 수 있다.
    printf("\n\n\n");      

/*
'a' (97) -> 0x61
'b' (98) -> 0x62
'c' (99) -> 0x63
'd' (100) -> 0x64
'e' (101) -> 0x65
'f' (102) -> 0x66
i 비트 필드 (16비트)의 값: 0x626
f 비트 필드 (8비트)의 값: 0x61
*/

    vueron_t var;
    var.c = 0;
    var.c = 0b111111110111111110111111110111111110;   //32비트 

    printf("Original input : %x\n", var.c);
    printf("vueron_t.a : %x\n", var.a);
    printf("vueron_t.b : %x\n", var.b);

    printf("vueron_t.c : %x\n", var.c);

    // LSB 확인
    int lsb = var.c & 1;
    printf("LSB: %d\n", lsb);

    // MSB 확인
    int msb = (var.c >> sizeof(var.c) * 8 - 1) & 1; // 오른쪽으로 shift해야 함, shift 크기는 변수의 크기 -1 만큼
    printf("MSB: %d\n", msb);

    return 0;
}
