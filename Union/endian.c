#include <stdio.h>

typedef struct {
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
    unsigned char byte4;

} BigEndianStruct;

struct Flags {
    unsigned int a : 1;    // a는 1비트 크기
    unsigned int b : 3;    // b는 3비트 크기
    unsigned int c : 7;    // c는 7비트 크기
}Flags_t;
int a= sizeof(Flags_t);

int main() {
    unsigned char byteArray[4] = {0x12, 0x34, 0x56, 0x78}; // 리틀 엔디안으로 저장된 데이터

    // 구조체로 바이트 배열을 캐스팅
    BigEndianStruct* bigEndianData = (BigEndianStruct*)byteArray;

    // 구조체로부터 데이터를 읽어옴
    unsigned int value = *((unsigned int*)bigEndianData);

    printf("빅 엔디안에서 읽은 값: 0x%08X\n", value);

    return 0;
}
