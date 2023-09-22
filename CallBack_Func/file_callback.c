#include <stdio.h>

// 콜백 함수 원형
typedef void (*FileCallback)(char*);

// 사용자 정의 함수
void ProcessLine(char* buffer) {
    printf("내용: %s", buffer);
}

// 파일 읽기 함수
void ReadFile(const char* filename, FileCallback callback) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("파일 열기 실패\n");
        return;
    }

    char buffer[256];
     printf("파일일 읽고 있습니다.\n\n");

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // 각 줄을 콜백 함수로 전달
        callback(buffer);
    }

    printf("\n\n");
     if (fclose(file) == 0) {
        printf("파일을 성공적으로 닫았습니다.\n");
    } else {
        printf("파일 닫기 실패\n");
    }
}


int main() {
    const char* filename = "example.txt";
    
    // 파일 읽기 함수에 사용자 정의 콜백 함수 등록
    ReadFile(filename, ProcessLine);

    return 0;
}
