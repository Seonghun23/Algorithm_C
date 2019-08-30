//
//  Bubble_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 30/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Bubble_Sort.h"

void bubbleSort(int list[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i] > list[j]) {
                swap(&list[i], &list[j]);
            }
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
