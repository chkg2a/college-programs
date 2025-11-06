#include <iostream>
#include <vector>
#include <stdexcept>

int parent(int i) { return (i - 1) / 2; }
int leftChild(int i) { return 2 * i + 1; }
int rightChild(int i) { return 2 * i + 2; }

void heapifyUp(std::vector<int>& heap, int i) {
    while (i != 0 && heap[parent(i)] < heap[i]) {
        std::swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

void heapifyDown(std::vector<int>& heap, int i) {
    int largest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    if (left < heap.size() && heap[left] > heap[largest])
        largest = left;

    if (right < heap.size() && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        std::swap(heap[i], heap[largest]);
        heapifyDown(heap, largest);
    }
}

void insert(std::vector<int>& heap, int key) {
    heap.push_back(key);
    heapifyUp(heap, heap.size() - 1);
}

int extractMax(std::vector<int>& heap) {
    if (heap.size() == 0)
        throw std::out_of_range("Heap is empty!");

    int root = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(heap, 0);

    return root;
}

int getMax(const std::vector<int>& heap) {
    if (heap.size() == 0)
        throw std::out_of_range("Heap is empty!");

    return heap[0];
}

void printHeap(const std::vector<int>& heap) {
    for (int i : heap) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> maxHeap;

    insert(maxHeap, 10);
    insert(maxHeap, 20);
    insert(maxHeap, 15);
    insert(maxHeap, 30);
    insert(maxHeap, 25);

    std::cout << "Max-Heap array: ";
    printHeap(maxHeap);

    std::cout << "Extracted max: " << extractMax(maxHeap) << std::endl;
    std::cout << "Max-Heap after extraction: ";
    printHeap(maxHeap);

    return 0;
}
