//
//  main.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 28/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include <stdio.h>
#include "Quick_Sort.h"

int main(int argc, const char * argv[]) {

    int data[10] = { 2, 9, 4, 18, 5, 1, 7, 8, 15, 12 };
    
    QuickSort(data, 0, 9);

    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    
    return 0;
}
