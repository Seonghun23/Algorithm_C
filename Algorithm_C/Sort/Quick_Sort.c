//
//  Quick_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 28/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Quick_Sort.h"

//void quick_sort(int arr[], int left, int right) {
//    int L = left, R = right;
//    int pivot = arr[(left + right) / 2];
//
//    while (L <= R) {
//
//        while (arr[L] < pivot) L++;
//
//        while (arr[R] > pivot) R--;
//
//        if (L <= R) {
//            if (L != R) swap(&arr[L], &arr[R]);
//
//            L++;
//            R--;
//        }
//    }
//
//    if (left < R) QuickSort(arr, left, R);
//    if (L < right) QuickSort(arr, L, right);
//}
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}


#define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

int partition(int list[], int left, int right){
    int pivot, temp;
    int low, high;
    
    low = left;
    high = right + 1;
    pivot = list[left];
    
    do{
        do {
            low++;
        } while (low<=right && list[low]<pivot);
        
        do {
            high--;
        } while (high>=left && list[high]>pivot);
    
        if(low<high) SWAP(list[low], list[high], temp);

    } while (low<high);
    
    SWAP(list[left], list[high], temp);

    return high;
}

void quick_sort(int list[], int left, int right){
    if(left<right){
        
        int q = partition(list, left, right);
        
        quick_sort(list, left, q-1);
        quick_sort(list, q+1, right);
    }
}
