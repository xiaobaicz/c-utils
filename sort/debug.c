//
// Created by lbc on 2023/4/18.
//

#include "debug.h"
#include <stdio.h>

void print_array(int *src, int start, int size) {
    printf("[");
    for (int i = start; i < size; i++) {
        printf("%d, ", src[i]);
    }
    printf("]\n");
}
