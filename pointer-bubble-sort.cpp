#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; ++i) {

        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    
    cout << "Original array: ";
    printArray(arr);
    clock_t start = clock();
    bubbleSort(arr);
    clock_t end = clock();
    
    cout << "Sorted array: ";
    printArray(arr);
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken for Bubble Sort: " << time_taken << " seconds" << endl;
    
    return 0;
}