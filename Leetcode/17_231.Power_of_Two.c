#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
//O(n)
bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    else if (n <= 0) return false;
    while (n > 1){
        // printf("n = %d", n);
        if (n % 2 != 0) return false;
        n = n >> 1;
    }
    return true;
}

//O(1)
bool isPowerOfTwo(int n) {
    return n > 0 && !(n & n - 1);
}