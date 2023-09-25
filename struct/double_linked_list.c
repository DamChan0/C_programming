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
        printf("%d\n", cuurent->data);
    }
    printf("\n");
}
int main(void){
    DoubleLinkedList_t* my_list = (DoubleLinkedList_t*)malloc(sizeof(DoubleLinkedList_t));
    initialize(my_list);
    dinsert(my_list, 1);
    dinsert(my_list, 2);
    dinsert(my_list, 3);
    dinsert(my_list, 4);
    dinsert(my_list, 5);
    dinsert(my_list, 6);
    dinsert(my_list, 7);
    dinsert(my_list, 8);
    dinsert(my_list, 9);
    dinsert(my_list, 10);
    dinsert(my_list, 11);
    dinsert(my_list, 12);
    dinsert(my_list, 13);
    dinsert(my_list, 14);
    dinsert(my_list, 15);
    dinsert(my_list, 16);
    dinsert(my_list, 17);
    dinsert(my_list, 18);
    print_list(my_list);
}