#include "heapSort.h"

int main() {

    srand(time(NULL));

    int arr1[ARRAY_LENGTH]; // init 2 arrays to the size specified (20,000)
    int arr2[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++)       // go through both 20,000 array indexes and 
        arr1[i] = arr2[i] = rand() % (1000 + 1); // gives a random int 0-1000

    bubbleSort(arr1, ARRAY_LENGTH); // calls arr1 to be sorted with bubble sort 
    heapSort(arr2, ARRAY_LENGTH);   // calls arr2 to be sorted with heap sort 

    return 0;
}