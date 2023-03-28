#include <stdio.h>
#include "recursion.h"

int min(int, int);

//Nível 1
int arrayMinimum(int arr[], int arrLength){

    if(arrLength == 1) return arr[0];

    return min(arr[arrLength-1], arrayMinimum(arr, arrLength-1));
}

int min(int n1, int n2){

    return n1<n2?n1:n2;
}

// Nível 2
int arraySumEven(int arr[], int arrLength){
   
    int sum = 0;

    if(arrLength == 0) return 0;

    if(arr[arrLength-1] % 2 == 0){
        sum += arr[arrLength-1];
    }
     return sum + arraySumEven(arr, arrLength-1);

    
}

//Nível 3
int binarySearch(int val, int arr[], int startIndex, int endIndex){

    if(startIndex > endIndex){
        return -1;
    }

    int mid = (startIndex + endIndex)/2;

    if(arr[mid] == val){
        return mid;
    } else if(arr[mid] > val){
        return binarySearch(val, arr, startIndex, mid-1);
    }else{
        return binarySearch(val,arr,mid+1, endIndex);
    }
}

//Nível 4

/* low  --> Starting index,  high  --> Ending index */

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */

   int partition (int arr[], int low, int high){
    // pivot (Element to be placed at right position)
    int pivot = arr[high];
    int temp = 0;

    int i = (low - 1);  // Index of smaller element and indicates the 
                        // right position of pivot found so far

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    temp = arr[high];
    arr[i + 1] = arr[high];
    arr[i + 1] = temp;

    return (i + 1);
}