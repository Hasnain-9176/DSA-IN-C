#include<stdio.h>
#include<stdlib.h>
void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,11};
    int n = 10;
    printArray(a,n);
}
