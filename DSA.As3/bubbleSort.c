#include "bubbleSort.h"

void bubbleSort(int arr[], int size) { // starts clock to time sorting
    clock_t startTime = clock();
    int i, j;
    for (i = 0; i < (size - 1); i++)          // counter so we go over every index in the array
        for (j = 0; j < (size - 1) - i; j++)  // counter that checks every element against the one infront of it 
            if (arr[j] > arr[j + 1])          // if the element we check if bigger then the one infront of it 
                swap(&arr[j], &arr[j + 1]);   // swap the two of them 
                                              // this loops over each element to check if its greater then the one infront  
                                              // and this whole loop is loops the number of elements - 1       
                                              // which gives it the N^2 time complexity 
    clock_t endTime = clock();
    double sortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC; // clock ends and is converted to seconds 

    printf("Bubble Sort: %.4fs\n\n", sortTime); // seconds are printed 
}

void swap(int* a, int* b) {
    int temp = *a; // swaps any 2 values handed in 
    *a = *b;
    *b = temp;
}