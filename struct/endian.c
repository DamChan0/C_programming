#include <stdio.h>

typedef struct {
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
    unsigned char byte4;

} BigEndianStruct;

struct Flags {
    unsigned int a : 1;    // a�� 1��Ʈ ũ��
    unsigned int b : 3;    // b�� 3��Ʈ ũ��
    unsigned int c : 7;    // c�� 7��Ʈ ũ��
}Flags_t;
int a= sizeof(Flags_t);

int main() {
    unsigned char byteArray[4] = {0x12, 0x34, 0x56, 0x78}; // ��Ʋ ��������� ����� ������

    // ����ü�� ����Ʈ �迭�� ĳ����
    BigEndianStruct* bigEndianData = (BigEndianStruct*)byteArray;

    // ����ü�κ��� �����͸� �о��
    unsigned int value = *((unsigned int*)bigEndianData);

    printf("�� ����ȿ��� ���� ��: 0x%08X\n", value);

    return 0;
}
