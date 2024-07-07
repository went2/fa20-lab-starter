#include <stdio.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    unsigned total = 0;
    for (int j = 0; j < ARR_SIZE(a); j++) {
        total += a[j];
    }
    printf("sum of array is %d\n", total);
}
