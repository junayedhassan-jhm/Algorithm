#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 15, 40, 50, 30, 85, 80, 90, 100};
    int target = 50;
    int found = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }
}
