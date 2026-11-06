#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            right = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 90;

    int foundIndex = binarySearch(arr, size, target);

    if (foundIndex != -1) {
        cout << "Target found in iNndex: " << foundIndex << endl;
    }
    else {
        cout << "Target Not Found" << endl;
    }

    return 0;
}

