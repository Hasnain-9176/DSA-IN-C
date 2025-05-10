 #include<stdio.h>
 #include<stdlib.h>
 struct node{
    int data;
    struct node *next;
    struct node *prev;
 };
 void doublyLinkedTraverse(struct node *ptr){
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

    head->prev = NULL;
    head->data  = 101;
    head->next = second;

    second->prev = head;
    second->data = 102;
    second->next = third;

    third->prev = second;
    third->data = 103;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 104;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 105;
    fifth->next = NULL;

    doublyLinkedTraverse(head);
    return 0;
}
