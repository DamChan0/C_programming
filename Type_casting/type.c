#include <stdio.h>
/**********************************************************************************************************************************************************************************/

int integer = 10;
char character = 'a';
float float_number = 2;
double double_number = 2;

typedef struct type
{
    int integer;
    char character;
    int float_number;
    int double_number;
} type_t;

typedef struct type_bitfield
{
    unsigned int integer1 :4;
    unsigned char character : 8;
    unsigned int integer2: 6;
    unsigned int integer3: 6;
} type_bitfield_t;
/**********************************************************************************************************************************************************************************/


unsigned char byteArray[4] = {0b10001100, 0b01000011, 0b11110110, 0b00100111};

int main(void)
{
    int IID = integer / double_number;         // 묵시적 형변환
    double DID = integer / double_number;      // 묵시적 형변환
    double DFD = float_number / double_number; // 묵시적 형변환
    int IFD = float_number / double_number;    // 묵시적 형변환
    printf("형변환 전 int integer/double_number 결과 값 %d\n", IID);
    printf("형변환 전 double  integer/double_number 결과 값 %f\n", DID);
    printf("형변환 전 double float_number/double_number 결과 값 %f\n", DFD);
    printf("형변환 전 int float_number/double_number 결과 값 %d\n", IFD);

    double ID_casting = (double)integer / double_number;      // 명시적 형변환
    double FD_casting = (double)float_number / double_number; // 명시적 형변환
    int IID_casting = (double)integer / double_number;
    ;                                                       // 명시적 형변환   -> 묵시적 형변환
    int IFD_casting = (double)float_number / double_number; // 명시적 형변환  -> 묵시적 형변환
    printf("doulbe 로 명시적 형변환 후 double (double)integer / double_number 결과 값 %f\n", ID_casting);
    printf("doulbe 로 명시적 형변환 후 double (double)float_number / double_number 결과 값 %f\n", FD_casting);
    printf("doulbe 로 명시적 형변환 후 int (double)float_number / double_number 결과 값 %d\n", IID_casting);
    printf("doulbe 로 명시적 형변환 후 int (double)float_number / double_number 결과 값 %d\n", IFD_casting);

/**********************************************************************************************************************************************************************************/

    double doubleArray[4] = {0};
    int intArray[4] = {0};
    for (int i = 0; i < 4; i++)
    {

        doubleArray[i] = byteArray[i];
        intArray[i] = byteArray[i];
    }
    printf("2진수 배열을 int 배열로 변환");
    for (int i = 0; i < 4; i++)
    {
        intArray[i] = (int)(intArray[i]); // 배열 형변환 char -> int
        printf(" %d ", intArray[i]);
    }
    printf("\n");
    printf("2진수 배열을 double 배열로 변환");
    for (int i = 0; i < 4; i++)
    {
        doubleArray[i] = (double)(doubleArray[i]); // 배열 형변환 char -> double
        printf("%f ", doubleArray[i]);
    }
/**********************************************************************************************************************************************************************************/

    type_t* type1 = (type_t*)byteArray;
    type_t* type2 = (type_t*)&byteArray[0];
    type_t* type3 = (type_t*)*(byteArray);  //byteArray의 첫 번째 요소에 대한 포인터
    type_t* type4 = (type_t*)byteArray[0];  //byteArray의 첫 번째 요소


    printf("type1의 integer : %d\n", type1->integer);       
    // int와 배열의 타입인 unsigned char 의 메모리 레이아웃이 일치하지 않아 670450572 로 나온다     int integer; => unsigned int integer : 8; 로 변경하면 140 으로 나온다        
    printf("type1의 character : %f\n", type1->character);
    printf("type1의 float_number : %f\n", type1->float_number);
    printf("type1의 double_number : %f\n", type1->double_number);
    printf("type2의 integer : %d\n", type2->integer);
    // int와 배열의 타입인 unsigned char 의 메모리 레이아웃이 일치하지 않아 670450572 로 나온다     int integer; => unsigned int integer : 8; 로 변경하면 140 으로 나온다        
    printf("type2의 character : %c\n", type2->character);
    printf("type2의 float_number : %f\n", type2->float_number);
    printf("type2의 double_number : %f\n", type2->double_number);
   
    type_bitfield_t* type5 = (type_bitfield_t*)byteArray;
    type_bitfield_t* type6 = (type_bitfield_t*)&byteArray[0];
    type_bitfield_t* type7 = (type_bitfield_t*)*(byteArray);  //byteArray의 첫 번째 요소에 대한 포인터
    type_bitfield_t* type8 = (type_bitfield_t*)byteArray[0];  //byteArray의 첫 번째 요소
    printf("type5의 integer : %d\n", type5->integer1);
    printf("type5의 character : %d\n", type5->character);
    printf("type5의 float_number : %d\n", type5->integer2);
    printf("type5의 double_number : %d\n", type5->integer3);
    printf("type6의 integer : %d\n", type6->integer1);
    printf("type6의 character : %d\n", type6->character);
    printf("type6의 float_number : %d\n", type6->integer2);
    printf("type6의 double_number : %d\n", type6->integer3);
  
    return 0;

}
