//
//  main.c
//  Algorithm_C
//
//  Created by Seonghun Kim on 28/08/2019.
//  Copyright © 2019 Seonghun Kim. All rights reserved.
//

//#include <stdio.h>
#include "Quick_Sort.h"
#define MAX_SIZE 10

int main(int argc, const char * argv[]) {

    int data[MAX_SIZE] = { 2, 9, 4, 18, 5, 1, 7, 8, 15, 12, 6};
    
    quickSort(data, 0, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    
    return 0;
}
