#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("stack is overflow : \n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is underflow : \n");
        return -1;
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
// Peek operation in Stack using array //
int peek(struct stack *sp, int i){
    if(sp->top-i+1 < 0){
        printf("Envalid position : \n");
    }else{
        return sp->arr[sp->top-i+1];
    }
}
int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size *sizeof(int));

    printf("\nStack created successfully :\n\n");
    printf("Before pushing is stack full : %d \n",isFull(sp));
    printf("Before pushing is stack empty : %d \n",isEmpty(sp));

    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);

    printf("\n");
    printf("after pushing is stack full :%d \n",isFull(sp));
    printf("after pushing is stack empty :%d \n",isEmpty(sp));

    for(int j=1; j<=sp->top+1; j++){
        printf("peek from %d is %d\n", j,peek(sp,j));
        
    }
    return 0;
}
