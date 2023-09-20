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
    int IID = integer / double_number;         // ������ ����ȯ
    double DID = integer / double_number;      // ������ ����ȯ
    double DFD = float_number / double_number; // ������ ����ȯ
    int IFD = float_number / double_number;    // ������ ����ȯ
    printf("����ȯ �� int integer/double_number ��� �� %d\n", IID);
    printf("����ȯ �� double  integer/double_number ��� �� %f\n", DID);
    printf("����ȯ �� double float_number/double_number ��� �� %f\n", DFD);
    printf("����ȯ �� int float_number/double_number ��� �� %d\n", IFD);

    double ID_casting = (double)integer / double_number;      // ����� ����ȯ
    double FD_casting = (double)float_number / double_number; // ����� ����ȯ
    int IID_casting = (double)integer / double_number;
    ;                                                       // ����� ����ȯ   -> ������ ����ȯ
    int IFD_casting = (double)float_number / double_number; // ����� ����ȯ  -> ������ ����ȯ
    printf("doulbe �� ����� ����ȯ �� double (double)integer / double_number ��� �� %f\n", ID_casting);
    printf("doulbe �� ����� ����ȯ �� double (double)float_number / double_number ��� �� %f\n", FD_casting);
    printf("doulbe �� ����� ����ȯ �� int (double)float_number / double_number ��� �� %d\n", IID_casting);
    printf("doulbe �� ����� ����ȯ �� int (double)float_number / double_number ��� �� %d\n", IFD_casting);

/**********************************************************************************************************************************************************************************/

    double doubleArray[4] = {0};
    int intArray[4] = {0};
    for (int i = 0; i < 4; i++)
    {

        doubleArray[i] = byteArray[i];
        intArray[i] = byteArray[i];
    }
    printf("2���� �迭�� int �迭�� ��ȯ");
    for (int i = 0; i < 4; i++)
    {
        intArray[i] = (int)(intArray[i]); // �迭 ����ȯ char -> int
        printf(" %d ", intArray[i]);
    }
    printf("\n");
    printf("2���� �迭�� double �迭�� ��ȯ");
    for (int i = 0; i < 4; i++)
    {
        doubleArray[i] = (double)(doubleArray[i]); // �迭 ����ȯ char -> double
        printf("%f ", doubleArray[i]);
    }
/**********************************************************************************************************************************************************************************/

    type_t* type1 = (type_t*)byteArray;
    type_t* type2 = (type_t*)&byteArray[0];
    type_t* type3 = (type_t*)*(byteArray);  //byteArray�� ù ��° ��ҿ� ���� ������
    type_t* type4 = (type_t*)byteArray[0];  //byteArray�� ù ��° ���


    printf("type1�� integer : %d\n", type1->integer);       
    // int�� �迭�� Ÿ���� unsigned char �� �޸� ���̾ƿ��� ��ġ���� �ʾ� 670450572 �� ���´�     int integer; => unsigned int integer : 8; �� �����ϸ� 140 ���� ���´�        
    printf("type1�� character : %f\n", type1->character);
    printf("type1�� float_number : %f\n", type1->float_number);
    printf("type1�� double_number : %f\n", type1->double_number);
    printf("type2�� integer : %d\n", type2->integer);
    // int�� �迭�� Ÿ���� unsigned char �� �޸� ���̾ƿ��� ��ġ���� �ʾ� 670450572 �� ���´�     int integer; => unsigned int integer : 8; �� �����ϸ� 140 ���� ���´�        
    printf("type2�� character : %c\n", type2->character);
    printf("type2�� float_number : %f\n", type2->float_number);
    printf("type2�� double_number : %f\n", type2->double_number);
   
    type_bitfield_t* type5 = (type_bitfield_t*)byteArray;
    type_bitfield_t* type6 = (type_bitfield_t*)&byteArray[0];
    type_bitfield_t* type7 = (type_bitfield_t*)*(byteArray);  //byteArray�� ù ��° ��ҿ� ���� ������
    type_bitfield_t* type8 = (type_bitfield_t*)byteArray[0];  //byteArray�� ù ��° ���
    printf("type5�� integer : %d\n", type5->integer1);
    printf("type5�� character : %d\n", type5->character);
    printf("type5�� float_number : %d\n", type5->integer2);
    printf("type5�� double_number : %d\n", type5->integer3);
    printf("type6�� integer : %d\n", type6->integer1);
    printf("type6�� character : %d\n", type6->character);
    printf("type6�� float_number : %d\n", type6->integer2);
    printf("type6�� double_number : %d\n", type6->integer3);
  
    return 0;

}
