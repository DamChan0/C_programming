#include <string.h>

int array[5] = {0x1, 0x2, 0x3, 0x4, 0x5};

int twoDimensional[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

int main(void)
{

    int *pnt_array = array;
    printf("array[5] : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", pnt_array[i]);
    }
    printf("\n\n");
    printf("pnt_array : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("\n\n");
    printf(" �ּ��� ������ ���� �迭�� ��� ���̴�\n");
    if (*(array + 1) == array[1])
    {
        printf("*(array+1) == array[1] ,  *(array+1) : %d", *(array + 1));
    }

    printf("\n\n �迭�� �̸��� �迭�� ���� �ּҰ��� ��Ÿ���� �������̴� \n");
    if (pnt_array + 1 == array + 1)
    {
        printf("pnt_array +1 == array +1 ,  array +1 : %#x\n", array + 1);
    }
    printf("\n\n\n");




    int(*pnt_array_2)[3] =twoDimensional; // �����Ϳ� �迭�� �ּҸ� �Ҵ�  ���� ������ ������ ũ�� ���� 

    int pnt_value = pnt_array_2[0][3]; // (*pnt_array_2)�� ����Ͽ� ��ҿ� ����
    int value = twoDimensional[0][1];

    printf("pnt_array_2[0][1] : %d\n", pnt_array_2[0][1]);
    printf("pnt_array_2[2][3] : %d\n", pnt_array_2[2][3]);
    printf("twoDimensional[0][1] : %d\n", twoDimensional[0][1]);
    printf("twoDimensional[2][3] : %d\n", twoDimensional[2][3]);

    return 0;
}
