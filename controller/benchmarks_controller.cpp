#include <chrono>
#include "controller\sorting_algorithms.cpp"

using namespace std;
using namespace std::chrono;

auto benchMarkBubbleSort(int *arr, int n, bool isAsc) {
    auto startTime = high_resolution_clock::now();
    bubbleSort(arr, n, isAsc);
    auto endTime = high_resolution_clock::now();
    return duration_cast<microseconds>(endTime - startTime);
}

auto benchMarkSelectionSort(int* arr, int n, bool isAsc) {
    auto startTime = high_resolution_clock::now();
    selectionSort(arr, n, isAsc);
    auto endTime = high_resolution_clock::now();
    return duration_cast<microseconds>(endTime - startTime);
}

auto benchMarkInsertionSort(int* arr, int n, bool isAsc) {
    auto startTime = high_resolution_clock::now();
    insertionSort(arr, n, isAsc);
    auto endTime = high_resolution_clock::now();
    return duration_cast<microseconds>(endTime - startTime);
}

auto benchMarkMergeSort(int* arr, int n, bool isAsc) {
    auto startTime = high_resolution_clock::now();
    mergeSort(arr, 0, n - 1, isAsc);
    auto endTime = high_resolution_clock::now();
    return duration_cast<microseconds>(endTime - startTime);
}

auto benchMarkQuickSort(int* arr, int n, bool isAsc) {
    auto startTime = high_resolution_clock::now();
    quickSort(arr, 0, n - 1, isAsc);
    auto endTime = high_resolution_clock::now();
    return duration_cast<microseconds>(endTime - startTime);
}
