#include <stdio.h>

void insertionSort(int arr[], int len){
    for(int i=1;i<len;i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {6, 4, 1, 3, 7, 5, 10, 9, 2, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, len);

    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
