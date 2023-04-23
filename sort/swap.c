//
// Created by lbc on 2023/4/18.
//

#include "swap.h"

void swap(int *src, int i, int j) {
    if (i == j) return;
    src[i] ^= src[j];
    src[j] ^= src[i];
    src[i] ^= src[j];
}