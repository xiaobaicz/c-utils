//
// Created by lbc on 2023/4/18.
//

#include "heap.h"
#include "swap.h"

void heap_make(int *src, int size);

void heap_max(int *src, int size, int i);

void heap_sort(int *src, int start, int size) {
    src += start;
    heap_make(src, size);
    for (int i = size - 1; i > 0; i--) {
        swap(src, 0, size - 1);
        heap_max(src, --size, 0);
    }
}

void heap_make(int *src, int size) {
    for (int i = size - 1; i >= 0; i--) {
        heap_max(src, size, i);
    }
}

void heap_max(int *src, int size, int i) {
    while (1) {
        const int l = (i << 1) + 1;
        const int r = (i << 1) + 2;
        int x = i;
        if (l < size && src[l] > src[x]) {
            x = l;
        }
        if (r < size && src[r] > src[x]) {
            x = r;
        }
        if (x == i)
            return;
        swap(src, i, x);
        i = x;
    }
}
