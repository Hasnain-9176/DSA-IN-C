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
struct node *deleteAtIndex(struct node *head, int index){
    struct node *p = head;
    struct node *q = head->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printf("Linked list before deletion : \n");
    LinkedTraverse(head);

    printf("\nLinked list after deletion : \n");
    head = deleteAtIndex(head, 3);
    LinkedTraverse(head);
    return 0;
}
