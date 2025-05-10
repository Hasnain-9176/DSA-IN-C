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
 struct node *insertAtFirst(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
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

    printf("Linked list before insertion : \n");
    LinkedTraverse(head);

    head = insertAtFirst(head, 10);

    printf("Linked list after insertion : \n");
    LinkedTraverse(head);
    return 0;
 }
