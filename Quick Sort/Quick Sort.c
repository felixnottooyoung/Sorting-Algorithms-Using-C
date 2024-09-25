#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right){
    int pivot = arr[right];

    int i = left-1;
    for(int j=left;j<right;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[right]);
    return i;
}

void quickSort(int arr[], int left, int right){
    if(left < right){
        int mid = partition(arr, left, right);

        quickSort(arr, mid+1, right);
        quickSort(arr, left, mid-1);
    }
}

int main(){
    int arr[] = {6, 4, 1, 3, 7, 5, 10, 9, 2, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, len-1);

    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
