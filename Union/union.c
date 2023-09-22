#include <stdio.h>
#include <string.h>

typedef union vueron
{
    unsigned char a;
    unsigned short b;
    int c;
} vueron_t;

typedef union NetworkData
{
    unsigned int i : 16;
    unsigned int f : 8;
    char bytes[6];
} LSBMSB;
unsigned char binaryValue[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

int main(void)
{
    LSBMSB data;
    data.f = 0;

    memcpy(data.bytes, binaryValue, sizeof(binaryValue));

    printf("union NetworkData �� ũ�� : %d\n", sizeof(LSBMSB));
    printf("LSBMSB.i : %d\n", data.i);      // �ٸ� ������� ���� �޸𸮿� ������ �� �ִ�.
    printf("LSBMSB.f : %d\n", data.f);      // �ٸ� ������� ���� �޸� ������ �� �ִ�.

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
    var.c = 0b111111110111111110111111110111111110;

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
