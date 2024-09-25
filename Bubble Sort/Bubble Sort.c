#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {6, 4, 1, 3, 7, 5, 10, 9, 2, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);

    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
