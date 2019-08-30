//
//  Insertion_Sort.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 30/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

#include "Insertion_Sort.h"

void insertion_sort(int list[], int n) {
    int j, temp;
    
    for(int i = 1; i < n; i++){
        temp = list[i];

        for(j=i-1; j>=0 && list[j] > temp; j--){
            list[j+1] = list[j];
        }
        
        list[j+1] = temp;
    }
}
