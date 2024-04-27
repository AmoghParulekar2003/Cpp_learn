#include<iostream>

void sort(int arr[], int size);

int main() {

    int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int element : arr) {
       std::cout<<element<<" ";
    }

    std::cout<<"\n";
    sort(arr, size);

    for(int element : arr) {
        std::cout<<element<<" ";
    }

    return 0;
}

void sort(int arr[], int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}