#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int len){
    int minIdx;
    for(int i=0;i<len-1;i++){
        minIdx = i;
        for(int j=i+1;j<len;j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            swap(&arr[minIdx], &arr[i]);
        }
    }
}

int main(){
    int arr[] = {6, 4, 1, 3, 7, 5, 10, 9, 2, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, len);

    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
