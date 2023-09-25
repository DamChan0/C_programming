#include <stdio.h>

// 비교 함수 (콜백 함수)
int ascendingOrder(int a, int b) {
    return a - b;
}

int descendingOrder(int a, int b) {
    return b - a;
}


// 정렬 함수
void sort(int arr[], int size, int (*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                // compare 함수를 사용하여 순서를 비교
                // 순서를 바꿈
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

    // 오름차순 정렬
    printf("Ascending Order:\n");
    sort(numbers, size, ascendingOrder);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 내림차순 정렬
    printf("Descending Order:\n");
    sort(numbers, size, descendingOrder);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
