#include <iostream>
using namespace std;
void pr(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int *ptr = &arr[i];  
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;  
    }
}
int main() {

    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    pr(arr, n);  
    
    insertionSort(arr, n);
    cout << "Sorted array: ";
    pr(arr, n); 
    return 0;

}