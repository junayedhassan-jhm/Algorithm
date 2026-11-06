#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int round = 0; round < size; round++) {
        for (int i = 0; i < size - 1 - round; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {50,25,40,20,10,5,60,30,15,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
