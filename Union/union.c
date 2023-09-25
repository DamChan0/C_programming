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

    printf("union NetworkData �� ũ�� : %d\n", sizeof(binarydata));
    printf("binarydata.i : %d\n", binarydata.i);      // �ٸ� ������� ���� �޸𸮿� ������ �� �ִ�.
    printf("binarydata.f : %d\n", binarydata.f);      // �ٸ� ������� ���� �޸� ������ �� �ִ�.
    printf("binarydata.d : %d\n", binarydata.d);      // �ٸ� ������� ���� �޸� ������ �� �ִ�.
    printf("\n\n\n");      

/*
'a' (97) -> 0x61
'b' (98) -> 0x62
'c' (99) -> 0x63
'd' (100) -> 0x64
'e' (101) -> 0x65
'f' (102) -> 0x66
i ��Ʈ �ʵ� (16��Ʈ)�� ��: 0x626
f ��Ʈ �ʵ� (8��Ʈ)�� ��: 0x61
*/

    vueron_t var;
    var.c = 0;
    var.c = 0b111111110111111110111111110111111110;   //32��Ʈ 

    printf("Original input : %x\n", var.c);
    printf("vueron_t.a : %x\n", var.a);
    printf("vueron_t.b : %x\n", var.b);

    printf("vueron_t.c : %x\n", var.c);

    // LSB Ȯ��
    int lsb = var.c & 1;
    printf("LSB: %d\n", lsb);

    // MSB Ȯ��
    int msb = (var.c >> sizeof(var.c) * 8 - 1) & 1; // ���������� shift�ؾ� ��, shift ũ��� ������ ũ�� -1 ��ŭ
    printf("MSB: %d\n", msb);

    return 0;
}
