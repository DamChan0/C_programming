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
    int IID = integer / double_number;         // ������ ����ȯ
    double DID = integer / double_number;      // ������ ����ȯ
    double DFD = float_number / double_number; // ������ ����ȯ
    int IFD = float_number / double_number;    // ������ ����ȯ

    double ID_casting = (double)integer / double_number;      // ����� ����ȯ
    double FD_casting = (double)float_number / double_number; // ����� ����ȯ
    int IID_casting = (double)integer / double_number;      // ����� ����ȯ   -> ������ ����ȯ
    int IFD_casting = (double)float_number / double_number; // ����� ����ȯ  -> ������ ����ȯ

    char num13 = 'a';
    int num11 = (int)(num13);
    printf(" int -> double\n");
    printf("int integer/double_number ��� �� %d\n", IID);
    printf("doulbe ����� ����ȯ �� double (double)integer / double_number ��� �� %f\n", ID_casting);
    printf("double ������ ����ȯ integer/double_number ��� �� %f\n\n\n", DID);


    printf(" float -> double\n");
    printf("����ȯ �� double float_number/double_number ��� �� %f\n", DFD);
    printf("doulbe �� ����� ����ȯ �� double (double)float_number / double_number ��� �� %f\n\n\n", FD_casting);


    printf("char-> int \n");
    printf("'a'�� int �� ����� ����ȯ ��� �� = a ASCII �� : %d\n\n\n", num13);

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
    printf("2���� �迭�� int �迭�� ��ȯ\n");

    for (int i = 0; i < 4; i++)
    {
    printf("%d", intArray[i]);
    }
    printf("\n\n\n");
    printf("2���� �迭�� double �迭�� ��ȯ \n");
    for (int i = 0; i < 4; i++)
    {
     printf("%f", doubleArray[i]);
    }
    printf("\n\n\n");

/**********************************************************************************************************************************************************************************/
    printf("<byteArray�� ����ü�� ��ȯ>\n\n");

    type_t* type1 = (type_t*)byteArray;
    type_t* type2 = (type_t*)&byteArray[0];

    printf("type_t* type1 = (type_t*)byteArray ���� byteArray�� ����ü�� ��ȯ\n\n");
    printf("typedef struct type\n{\nint integer;\nchar character;\nint float_number;\nint double_number;\n}type_t;\n\n");      
    printf("type1�� integer : %d (int�� �迭�� Ÿ���� unsigned char �� �޸� ���̾ƿ��� ��ġ���� ����)\n", type1->integer);       
    // int�� �迭�� Ÿ���� unsigned char �� �޸� ���̾ƿ��� ��ġ���� �ʾ� 670450572 �� ���´�     int integer; => unsigned int integer : 8; �� �����ϸ� 140 ���� ���´�        
    printf("type1�� character : %f\n ", type1->character);
    printf("type1�� float_number : %f\n", type1->float_number);
    printf("type1�� double_number : %f\n\n\n", type1->double_number);

   
    printf("type_bitfield_t* type5 = (type_bitfield_t*)byteArray; ���� byteArray�� ����ü�� ��ȯ\n");
    printf("bit field�� ����� ����ü type_bitfield_t\n\n");
    printf("typedef struct type_bitfield\n{\nunsigned int integer1 :8;\nunsigned char character : 8;\nunsigned int integer2: 6;\nunsigned int integer3: 6;\n} type_bitfield_t;\n\n");
    type_bitfield_t* type5 = (type_bitfield_t*)byteArray;

    type_bitfield_t* type6 = (type_bitfield_t*)&byteArray[0];
  
    printf("type5�� integer : %d\n", type5->integer1);
    printf("type5�� character : %d\n", type5->character);
    printf("type5�� float_number : %d\n", type5->integer2);
    printf("type5�� double_number : %d\n", type5->integer3);

  
    return 0;

}
