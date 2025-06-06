#include <iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            if (x == 0) return true;
            if (x < 0 || x % 10 == 0) return false;
            unsigned long long tmp = x, cpy = 0;
            while (tmp > 0){
                cpy = tmp % 10 + cpy*10;
                tmp = tmp / 10;
            }
            return x == cpy;
        }
    };