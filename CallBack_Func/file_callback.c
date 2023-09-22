#include <stdio.h>

// �ݹ� �Լ� ����
typedef void (*FileCallback)(char*);

// ����� ���� �Լ�
void ProcessLine(char* buffer) {
    printf("����: %s", buffer);
}

// ���� �б� �Լ�
void ReadFile(const char* filename, FileCallback callback) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("���� ���� ����\n");
        return;
    }

    char buffer[256];
     printf("������ �а� �ֽ��ϴ�.\n\n");

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // �� ���� �ݹ� �Լ��� ����
        callback(buffer);
    }

    printf("\n\n");
     if (fclose(file) == 0) {
        printf("������ ���������� �ݾҽ��ϴ�.\n");
    } else {
        printf("���� �ݱ� ����\n");
    }
}


int main() {
    const char* filename = "example.txt";
    
    // ���� �б� �Լ��� ����� ���� �ݹ� �Լ� ���
    ReadFile(filename, ProcessLine);

    return 0;
}
