/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

char** readBinaryWatch(int turnedOn, int* returnSize) {
    char** res = (char**)malloc(720 * sizeof(char*));
    int count = 0;

    for (int h = 0; h < 12; ++h) {
        for (int m = 0; m < 60; ++m) {
            if (countBits(h) + countBits(m) == turnedOn) {
                res[count] = (char*)malloc(6 * sizeof(char)); // "h:mm\0"
                sprintf(res[count], "%d:%02d", h, m);
                count++;
            }
        }
    }

    *returnSize = count;
    return res;
}