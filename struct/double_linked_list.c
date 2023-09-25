#include <stdio.h>
// 노드 구조체 정의
typedef struct Node {
    int data;           // 데이터
    struct Node* llink;  // 이전 노드를 가리키는 포인터
    struct Node* rlink;  // 다음 노드를 가리키는 포인터
}DoubleLinkedList_t;

// 이중 연결 리스트 구조체 정의
// typedef struct DoubleLinkedList {

//     Node_t* head;  // 리스트의 시작 노드를 가리키는 포인터
//     Node_t* tail;  // 리스트의 끝 노드를 가리키는 포인터
// }DoubleLinkedList_t;

void initialize(DoubleLinkedList_t* initialized_node) {
    initialized_node->llink = initialized_node;
    initialized_node->rlink = initialized_node;
}
void dinsert(DoubleLinkedList_t* before, int data) {
	DoubleLinkedList_t* newnode = (DoubleLinkedList_t*)malloc(sizeof(DoubleLinkedList_t));
	newnode->data = data;
	newnode->llink = before;
	newnode->rlink = before->rlink;
	before->rlink->llink = newnode;
	before->rlink = newnode;
}

// 노드 삭제
void ddelete(DoubleLinkedList_t* before, DoubleLinkedList_t* removing_node) {
	if (removing_node == before)    //removing_node 가 haed일 경우 동작 x
    return;
	
    before->rlink = removing_node->rlink;
	removing_node->rlink->llink = removing_node->llink;
	free(removing_node);
}

void print_list(DoubleLinkedList_t* initialized_node) {
    DoubleLinkedList_t* cuurent;
    for(cuurent = initialized_node->rlink; cuurent != initialized_node ; cuurent = cuurent->rlink) {
        printf("%d", cuurent->data);
    }
    printf("\n");
}
int main(void){
    DoubleLinkedList_t* head = (DoubleLinkedList_t*)malloc(sizeof(DoubleLinkedList_t));
    initialize(head);
    printf("추가 단계\n");
	for (int i = 0; i < 5; i++) {
		dinsert(head, i);
		print_list(head);
	}
	printf("\n삭제 단계\n");
	for (int i = 0; i < 5; i++) {
		print_list(head);
		ddelete(head, head->rlink);
	}
	free(head);
	return 0;
}

