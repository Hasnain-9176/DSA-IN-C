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
struct node *deleteAtFirst(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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

    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = NULL;

    printf("Linked list before deletion : \n");
    LinkedTraverse(head);

    printf("\nLinked list after deletion : \n");
    head = deleteAtFirst(head);
    LinkedTraverse(head);
    return 0;
}
