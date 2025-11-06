#include <iostream>
#include <vector>

class MaxHeap {
private:
    std::vector<int> heap;

    // Helper functions for managing the heap structure
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    // Heapify the heap upwards after insertion
    void heapifyUp(int i) {
        while (i != 0 && heap[parent(i)] < heap[i]) {
            std::swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    // Heapify the heap downwards after removal
    void heapifyDown(int i) {
        int largest = i;
        int left = leftChild(i);
        int right = rightChild(i);

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            std::swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Insert a new element into the heap
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    // Remove and return the maximum element (root) from the heap
    int extractMax() {
        if (heap.size() == 0)
            throw std::out_of_range("Heap is empty!");

        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        
        return root;
    }

    // Get the maximum element (root) from the heap
    int getMax() const {
        if (heap.size() == 0)
            throw std::out_of_range("Heap is empty!");

        return heap[0];
    }

    // Check if the heap is empty
    bool isEmpty() const {
        return heap.empty();
    }

    // Print the elements of the heap
    void printHeap() const {
        for (int i : heap) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MaxHeap maxHeap;

    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(25);

    std::cout << "Max-Heap array: ";
    maxHeap.printHeap();

    std::cout << "Extracted max: " << maxHeap.extractMax() << std::endl;
    std::cout << "Max-Heap after extraction: ";
    maxHeap.printHeap();

    return 0;
}
