#include <stdio.h>
// ��� ����ü ����
typedef struct Node {
    int data;           // ������
    struct Node* llink;  // ���� ��带 ����Ű�� ������
    struct Node* rlink;  // ���� ��带 ����Ű�� ������
}DoubleLinkedList_t;

// ���� ���� ����Ʈ ����ü ����
// typedef struct DoubleLinkedList {

//     Node_t* head;  // ����Ʈ�� ���� ��带 ����Ű�� ������
//     Node_t* tail;  // ����Ʈ�� �� ��带 ����Ű�� ������
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

// ��� ����
void ddelete(DoubleLinkedList_t* before, DoubleLinkedList_t* removing_node) {
	if (removing_node == before)    //removing_node �� haed�� ��� ���� x
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
    printf("�߰� �ܰ�\n");
	for (int i = 0; i < 5; i++) {
		dinsert(head, i);
		print_list(head);
	}
	printf("\n���� �ܰ�\n");
	for (int i = 0; i < 5; i++) {
		print_list(head);
		ddelete(head, head->rlink);
	}
	free(head);
	return 0;
}

