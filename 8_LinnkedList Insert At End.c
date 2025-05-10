#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void LinkedTraverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtEnd(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Linked list before insertion :\n");
    LinkedTraverse(head);

    printf("\nLinked list after insertion :\n");
    head = insertAtEnd(head, 4);
    LinkedTraverse(head);
    return 0;
}
