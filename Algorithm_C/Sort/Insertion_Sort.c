//
//  Insertion_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 30/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Insertion_Sort.h"

void insertionSort(int list[], int n) {
    int i, j, key;
    
    for(i=1; i<n; i++){
        key = list[i];

        for(j=i-1; j>=0 && list[j]>key; j--){
            list[j+1] = list[j];
        }
        
        list[j+1] = key;
    }
}
