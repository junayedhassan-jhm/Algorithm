#include<iostream>
using namespace std;


int linearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {12, -6, 55, 3, 77, -3, 34, 5, -6, -1};

    int target = 5;
    int size = 0;

    while (arr[size] != -1) {
        size++;
    }

    int foundIndex = linearSearch(arr, size, target);

    if (foundIndex != -1) {
        cout << "Target: " << target << endl;
        cout << "Found Index: " << foundIndex << endl;
    }
    else {
        cout << "Target Not Found!" << endl;
    }

    return 0;
}

