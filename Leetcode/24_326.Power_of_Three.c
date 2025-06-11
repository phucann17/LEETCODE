#include <stdio.h>
#include <stdbool.h>
bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n > 1){
        // printf("n= %d", n);
        if (n % 3 != 0) return false;
        n = n / 3;
    }
    return true;
}