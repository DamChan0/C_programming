#include <stdio.h>

// �� �Լ� (�ݹ� �Լ�)
int ascendingOrder(int a, int b) {
    return a - b;
}

int descendingOrder(int a, int b) {
    return b - a;
}


// ���� �Լ�
void sort(int arr[], int size, int (*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                // compare �Լ��� ����Ͽ� ������ ��
                // ������ �ٲ�
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // �������� ����
    printf("Ascending Order:\n");
    sort(numbers, size, ascendingOrder);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // �������� ����
    printf("Descending Order:\n");
    sort(numbers, size, descendingOrder);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
