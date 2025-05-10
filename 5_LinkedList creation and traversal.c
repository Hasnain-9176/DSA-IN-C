// Linked list creation and traversal //

// creating node in Linked list //
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
 int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    head->data  = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    LinkedTraverse(head);
    return 0;
 }
