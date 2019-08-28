//
//  Quick_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 28/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Quick_Sort.h"

void QuickSort(int arr[], int left, int right) {
    int L = left, R = right;
    int pivot = arr[(left + right) / 2];

    while (L <= R) {

        while (arr[L] < pivot) L++;
        
        while (arr[R] > pivot) R--;

        if (L <= R) {
            if (L != R) swap(&arr[L], &arr[R]);
            
            L++;
            R--;
        }
    }

    if (left < R) QuickSort(arr, left, R);
    if (L < right) QuickSort(arr, L, right);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
