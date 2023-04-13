#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int* arr, int n, bool isAsc) {
    char ori = isAsc ? 1 : -1;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (ori * arr[j - 1] > ori * arr[j])
                swap(arr[j - 1], arr[j]);
        }
    }
}

void selectionSort(int* arr, int n, bool isAsc) {
    char ori = isAsc ? 1 : -1;
    for (int i = 0; i < n - 1; ++i) {
        int m = i;
        for (int j = i + 1; j < n; ++j) {
            if (ori * arr[m] > ori * arr[j]) {
                m = j;
            }
        }
        swap(arr[m], arr[i]);
    }
}

void insertionSort(int* arr, int n, bool isAsc) {
    char ori = isAsc ? 1 : -1;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j > -1 && key * ori < arr[j] * ori) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// BEGIN MERGE SORT
void copyArr(int* srcArr, int* destArr, int begin, int end) {
    int i = 0;
    while (begin <= end) {
        destArr[i++] = srcArr[begin++];
    }
}

void merge(int* arr, int l, int m, int r, bool isAsc) {
    char ori = isAsc ? 1 : -1;
    int n1 = m - l + 1;
    int n2 = r - m;
    int* leftArr = new int[n1];
    int* rightArr = new int[n2];
    copyArr(arr, leftArr, l, m);
    copyArr(arr, rightArr, m + 1, r);
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        leftArr[i] * ori < rightArr[j] * ori
        ? arr[l++] = leftArr[i++]
                        : arr[l++] = rightArr[j++];
    }
    while (i < n1) arr[l++] = leftArr[i++];
    while (j < n2) arr[l++] = rightArr[j++];
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int* arr, int l, int r, bool isAsc) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m, isAsc);
    mergeSort(arr, m + 1, r, isAsc);
    merge(arr, l, m, r, isAsc);
}
// END MERGE SORT

// BEGIN QUICK SORT
int hoarePartition(int* arr, int l, int r, bool isAsc) {
    char ori = isAsc ? 1 : -1;
    int pivot = arr[(l + r) / 2];
    int i = l - 1;
    int j = r + 1;
    while (1) {
        do {
            ++i;
        } while (arr[i] * ori < pivot * ori);
        do {
            --j;
        } while (arr[j] * ori > pivot * ori);
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            return j;
        }
    }
}

void quickSort(int* arr, int l, int r, bool isAsc) {
    if (l >= r) return;
    // Gán chỉ số phân hoạch p
    int p = hoarePartition(arr, l, r, isAsc);
    quickSort(arr, l, p, isAsc);
    quickSort(arr, p + 1, r, isAsc);
}
// END QUICK SORT



void heapSort(int* arr, int l, int r) {

}






void sayGoodBye() {
    cout << "See yaaaa!";
}
