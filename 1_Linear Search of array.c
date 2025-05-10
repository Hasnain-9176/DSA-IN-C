#include<stdio.h>
int linearSearch(int arr[], int size, int search){
    for(int i=0; i<size; i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,3,2,5,8,7,4,6};
    int size = 8;
    int search = 5;
    int found = linearSearch(arr, size, search);
    printf("The search element %d is found at index %d",search,found);
    return 0;
}
