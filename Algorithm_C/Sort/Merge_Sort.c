//
//  Merge_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 30/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Merge_Sort.h"
# define MAX_SIZE 10

int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int right) {
    int i = left;
    int j = mid+1;
    int k = left;
    int l;

    
    while(i<=mid && j<=right){
        if(list[i]<=list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }
    
    if (i > mid)
        for(l=j; l<=right; l++) sorted[k++] = list[l];
    else
        for(l=i; l<=mid; l++) sorted[k++] = list[l];
    
    for(l=left; l<=right; l++){
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right) {
    int mid;
    
    if(left<right){
        mid = (left+right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);
    }
}
