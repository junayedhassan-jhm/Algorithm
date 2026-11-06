#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,4,6,2,3,1,9,8,10,0,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int swap;

    for (int round = 0; round < size; round++) {
        swap = 0;
        for (int i = 0; i < size - 1 - round; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
            break;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}
