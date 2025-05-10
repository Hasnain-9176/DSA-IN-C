#include<stdio.h>
int binarySearch(int arr[], int size, int search){
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==search){
            return mid;
        }
        if(arr[mid]<search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int search = 7;
    int found = binarySearch(arr, size, search);
    printf("The elment %d is found at index %d", search, found);
    return 0;
}
