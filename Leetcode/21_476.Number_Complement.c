int findComplement(int num) {
    // shift bit of mask so that it has same bit numbers at num
    // we just & ~num with 111...11(depend on the numbers of bit we have in num and mask)
    int mask = 1;
    while (mask < num){
        mask = (mask << 1) | 1;
    }
    return ~num & mask;
}