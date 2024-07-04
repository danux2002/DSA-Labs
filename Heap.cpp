#include <iostream>
#include <vector>

void maxHeapify(std::vector<int>& A, int i, int heapSize) {
    int l = 2 * i + 1; // left child index
    int r = 2 * i + 2; // right child index
    int largest;

    if (l < heapSize && A[l] > A[i])
        largest = l;
    else
        largest = i;

    if (r < heapSize && A[r] > A[largest])
        largest = r;

    if (largest != i) {
        // Exchange A[i] with A[largest]
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        // Recursively heapify the affected subtree
        maxHeapify(A, largest, heapSize);
    }
}

int main() {
    std::vector<int> A = {4, 10, 3, 5, 1, 2};

    // Assuming the heap size is the size of the array
    int heapSize = A.size();

    int i = 1; // Example index i

    maxHeapify(A, i, heapSize);

    std::cout << "Max-heapified array:" << std::endl;
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
