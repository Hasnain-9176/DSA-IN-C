// Here we can provide the index manually //

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
struct node *insertAtIndex(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(i=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    printf("Linked list before insertion : \n");
    LinkedTraverse(head);

    printf("\nLinked list after insertion : \n");
    head = insertAtIndex(head, 2, 1);
    LinkedTraverse(head);

    return 0;

}
