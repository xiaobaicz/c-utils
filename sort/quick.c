//
// Created by lbc on 2023/4/18.
//

#include "quick.h"
#include "swap.h"

#include <stdio.h>
// 减少找到最大/最小的Target导致只有一个分区导致的速度变慢
void quick_tidy(int *src, int size);

void quick_sort(int *src, int start, int size) {
    src += start;
    const int last = size - 1;
    quick_tidy(src, size);
    const int target = src[last];
    const int limit = size - 1;
    int p = -1;
    int i;
    for (i = 0; i < limit; i++) {
        if (src[i] < target) {
            swap(src, i, ++p);
        }
    }
    swap(src, last, ++p);
    if (p > 1) {
        quick_sort(src, 0, p);
    }
    if (size - p > 2) {
        quick_sort(src, p + 1, size - p - 1);
    }
}

void quick_tidy(int *src, int size) {
    const int a = 0, b = size / 2, c = size - 1;
    if (src[a] > src[b])
        swap(src, a, b);
    if (src[b] > src[c])
        swap(src, b, c);
    if (src[a] > src[b])
        swap(src, a, b);
    swap(src, b, c);
}