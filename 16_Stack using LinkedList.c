#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void LinkedStackTraverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct node *top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct node *top){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(p == NULL){
        return 1;
    }else{
        return 0;
    }
}
struct node *push(struct node *top, int val){
    if(isFull(top)){
        printf("Stack is overflow :\n");
    }else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node *top){
    if(isEmpty(top)){
        printf("Stack is underflow : \n");
        return -1;
    }else{
        struct node *n = top;
        top = top->next;
        int val = n->data;
        free(n);
        return val;
    }
}
int main(){
    struct node *top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);

    LinkedStackTraverse(top);

    int remove = pop(top);
    printf("\nThe popped element from the stack is : %d\n",remove);
    return 0;
}
