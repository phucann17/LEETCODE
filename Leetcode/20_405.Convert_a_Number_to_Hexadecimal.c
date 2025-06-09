#include "stdio.h"
#include <string.h>
char* toHex(int num) {
    if (num == 0) return strdup("0");

    char* hex = "0123456789abcdef";
    char buffer[9];
    buffer[8] = '\0';
    unsigned int n = num;
    int i = 7;

    while (n > 0 && i >= 0) {
        buffer[i--] = hex[n % 16];
        n /= 16;
    }

    char* result = strdup(&buffer[i + 1]);
    return result;
}