#include <stdint.h>
#include <stdbool.h>
//O(n)
bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    while (n > 1){
        if (n % 4 != 0) return false;
        n = n / 4;
    }
    return true;
}

//O(1)
bool isPowerOfFour(int n) {
    // Điều kiện 1: Kiểm tra n là lũy thừa của 2
    // (n & (n - 1)) == 0 nghĩa là n có đúng 1 bit 1 trong biểu diễn nhị phân
    // Ví dụ:
    // n = 1 (00000001) -> 1 & 0 = 0
    // n = 2 (00000010) -> 2 & 1 = 0
    // n = 4 (00000100) -> 4 & 3 = 0
    // n = 6 (00000110) -> 6 & 5 = 4

    // Điều kiện 2: Bit 1 duy nhất phải nằm ở vị trí chẵn (0, 2, 4, ...)
    // 0x55555555 = 01010101 01010101 01010101 01010101 (32-bit)
    // Tức là có bit 1 ở các vị trí chẵn (bắt đầu từ phải, vị trí 0)
    // Chỉ các lũy thừa của 4 (1, 4, 16, 64, ...) mới thỏa mãn điều này
    // Ví dụ:
    // n = 16 -> 00010000 -> bit 1 ở vị trí 4 → (n & 0x55555555) = 00010000
    // n = 8  -> 00001000 -> bit 1 ở vị trí 3 → (n & 0x55555555) = 00000000
    return n > 0 &&
           (n & (n - 1)) == 0 &&        // là lũy thừa của 2
           (n & 0x55555555) != 0;       // bit 1 ở đúng vị trí của lũy thừa 4
}