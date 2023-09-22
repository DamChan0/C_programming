#include <stdio.h>
#include <string.h>
/**********************************************************************************************************************************************************************************/

int integer = 10;
char character = 'a';
float float_number = 2;
double double_number = 2;

typedef struct type
{
    unsigned int integer: 8;
    char character;
    int float_number;
    int double_number;
} type_t;

typedef struct type_bitfield
{
    unsigned int integer1 :8;
    unsigned char character : 8;
    unsigned int integer2: 6;
    unsigned int integer3: 6;
} type_bitfield_t;
/**********************************************************************************************************************************************************************************/

unsigned char byteArray1[4] = {0b10001100, 0b01000011, 0b11110110, 0b00100111};
#pragma pack(push, 1)
typedef struct MyStruct {
   unsigned char a ;
    unsigned char b ;
    unsigned char c ;
    unsigned char d ;
}MyStruct_t;	

MyStruct_t* myStructPtr = (MyStruct_t *)byteArray1;
int a = sizeof(MyStruct_t);
unsigned char byteArray[4] = {0b10001100, 0b01000011, 0b11110110, 0b00100111};

int main(void)
{
    int IID = integer / double_number;         // 묵시적 형변환
    double DID = integer / double_number;      // 묵시적 형변환
    double DFD = float_number / double_number; // 묵시적 형변환
    int IFD = float_number / double_number;    // 묵시적 형변환

    double ID_casting = (double)integer / double_number;      // 명시적 형변환
    double FD_casting = (double)float_number / double_number; // 명시적 형변환
    int IID_casting = (double)integer / double_number;      // 명시적 형변환   -> 묵시적 형변환
    int IFD_casting = (double)float_number / double_number; // 명시적 형변환  -> 묵시적 형변환

    char num13 = 'a';
    int num11 = (int)(num13);
    printf(" int -> double\n");
    printf("int integer/double_number 결과 값 %d\n", IID);
    printf("doulbe 명시적 형변환 후 double (double)integer / double_number 결과 값 %f\n", ID_casting);
    printf("double 묵시적 형변환 integer/double_number 결과 값 %f\n\n\n", DID);


    printf(" float -> double\n");
    printf("형변환 전 double float_number/double_number 결과 값 %f\n", DFD);
    printf("doulbe 로 명시적 형변환 후 double (double)float_number / double_number 결과 값 %f\n\n\n", FD_casting);


    printf("char-> int \n");
    printf("'a'를 int 로 명시적 형변환 결과 값 = a ASCII 값 : %d\n\n\n", num13);

/**********************************************************************************************************************************************************************************/

    double doubleArray[4] = {0};
    int intArray[4] = {0};

    // memcpy(doubleArray, byteArray, sizeof(doubleArray));
    // memcpy(intArray, byteArray, sizeof(intArray));
    for (int i = 0; i < 4; i++)
    {
        doubleArray[i] = (double)byteArray[i];
        intArray[i] = (unsigned int) byteArray[i];

    }
    printf("2진수 배열을 int 배열로 변환\n");

    for (int i = 0; i < 4; i++)
    {
    printf("%d", intArray[i]);
    }
    printf("\n\n\n");
    printf("2진수 배열을 double 배열로 변환 \n");
    for (int i = 0; i < 4; i++)
    {
     printf("%f", doubleArray[i]);
    }
    printf("\n\n\n");

/**********************************************************************************************************************************************************************************/
    printf("<byteArray를 구조체로 변환>\n\n");

    type_t* type1 = (type_t*)byteArray;
    type_t* type2 = (type_t*)&byteArray[0];

    printf("type_t* type1 = (type_t*)byteArray 으로 byteArray를 구조체로 변환\n\n");
    printf("typedef struct type\n{\nint integer;\nchar character;\nint float_number;\nint double_number;\n}type_t;\n\n");      
    printf("type1의 integer : %d (int와 배열의 타입인 unsigned char 의 메모리 레이아웃이 일치하지 않음)\n", type1->integer);       
    // int와 배열의 타입인 unsigned char 의 메모리 레이아웃이 일치하지 않아 670450572 로 나온다     int integer; => unsigned int integer : 8; 로 변경하면 140 으로 나온다        
    printf("type1의 character : %f\n ", type1->character);
    printf("type1의 float_number : %f\n", type1->float_number);
    printf("type1의 double_number : %f\n\n\n", type1->double_number);

   
    printf("type_bitfield_t* type5 = (type_bitfield_t*)byteArray; 으로 byteArray를 구조체로 변환\n");
    printf("bit field를 사용한 구조체 type_bitfield_t\n\n");
    printf("typedef struct type_bitfield\n{\nunsigned int integer1 :8;\nunsigned char character : 8;\nunsigned int integer2: 6;\nunsigned int integer3: 6;\n} type_bitfield_t;\n\n");
    type_bitfield_t* type5 = (type_bitfield_t*)byteArray;

    type_bitfield_t* type6 = (type_bitfield_t*)&byteArray[0];
  
    printf("type5의 integer : %d\n", type5->integer1);
    printf("type5의 character : %d\n", type5->character);
    printf("type5의 float_number : %d\n", type5->integer2);
    printf("type5의 double_number : %d\n", type5->integer3);

  
    return 0;

}
