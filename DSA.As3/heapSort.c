#include "heapSort.h"

void heapSort(int arr[], int size) {

    clock_t startTime = clock();

    for (int i = (size / 2) - 1; i >= 0; i--) // builds max heap with the arr
        heapify(arr, size, i);

    for (int i = size - 1; i >= 0; i--) { // go throug each element and swaps the first element with the element at i
        swap(&arr[0], &arr[i]);           // then re-heapifies with the largest index value now at the root and sorts 
        heapify(arr, i, 0);               // until the root number (which is small) sorted back into its proper spot
    }                                     // in the tree while swapping up the largest element 

    clock_t endTime = clock();
    double sortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("Heap Sort: %.4fs\n\n", sortTime);
}

void heapify(int arr[], int index, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < index && arr[left] > arr[largest]) // if left is higher in the tree and the value left to the parent is greater than the largest
        largest = left;                           // the left is not equal to left child 

    if (right < index && arr[right] > arr[largest]) // same steps as above but for the right child 
        largest = right;

    if (largest != i) {               // if the largest element has changed this run through in either of these if statements
        swap(&arr[i], &arr[largest]); // swap the values in index i and largest 
        heapify(arr, index, largest); // heapify the parent (largest index) to continue this recursive call moving the largest 
    }                                 // largest element to the bottom of the tree 
}