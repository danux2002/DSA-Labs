#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void Heapify(vector<int>& arr, int i, int arrSize) {
    int largest = i;
    int r = 2 * i + 2;
    int L = 2 * i + 1;

    if (L < arrSize && arr[largest] < arr[L]) {
        largest = L;
    }
    if (r < arrSize && arr[largest] < arr[r]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        Heapify(arr, largest, arrSize);
    }
}

void BuildMaxHeap(vector<int>& array) {
    int size = array.size();
    for (int i = size / 2 - 1; i >= 0; i--) {
        Heapify(array, i, size);
    }
}

vector<int> HeapSort(vector<int> arr) {
    BuildMaxHeap(arr);
    int arrSize = arr.size();
    for (int i = arrSize - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        Heapify(arr, 0, i);
    }
    return arr;
}

int main() {
    vector<int> A = {34, 12, 2, 4, 23, 6, 45};
    vector<int> B;
    B = HeapSort(A);
    for (int x = 0; x < B.size(); x++) {
        cout << B[x] << " ";
    }
    cout << endl;
    return 0;
}
