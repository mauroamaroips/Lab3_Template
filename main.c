#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "recursion.h"


int findIndexOf(int val, int arr[], int arrLength);
void printArray(int arr[], int arrSize);
void quickSortArr(int arr[], int arrSize);

int main() {

    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };

    int arrBinarySearch[12] = {
        1, 4, 4, 7, 7, 8, 11, 19, 21, 23, 24, 30
    };

    //Nível 1
    int minimum = arrayMinimum(seq,50);
    printf("%d\n", minimum);

    //Nível 2
    int sumEven = arraySumEven(seq,50);
    printf("%d\n", sumEven);

    //Nível 3
    int binSearch = binarySearch(19, arrBinarySearch, 0, 12);
    printf("%d\n", binSearch);

    //Nível 4 e 5
    quickSort(seq,0,49);
    printArray(seq, 50);

    //Adenda - Invocação
    printf("%d\n", findIndexOf(19,arrBinarySearch,12));

    quickSortArr(seq, 50);
    printArray(seq, 50);
    
        return EXIT_SUCCESS;
}


int findIndexOf(int val, int arr[], int arrLength) {
    /* First call of binary search to include the whole array */
    return binarySearch(val, arr, 0, arrLength - 1);
}

void quickSortArr(int arr[], int arrLength) {
    /* First call of binary search to include the whole array */
    quickSort(arr, 0, arrLength);
} 

void printArray(int arr[], int arrSize){

    for (int i = 0; i < arrSize; i++){
        printf("%d ", arr[i]);
        if(i == arrSize-1){
            printf("\n");
        }
    }
}
