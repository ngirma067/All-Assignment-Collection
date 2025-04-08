#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        if (arr[mid] > target) return recursiveBinarySearch(arr, left, mid - 1, target);
        return recursiveBinarySearch(arr, mid + 1, right, target);
    }
    return -1; // Not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int result = recursiveBinarySearch(arr, 0, n - 1, target);
    cout << (result != -1 ? "Found at index " + to_string(result) : "Not found") << endl;
    return 0;
}