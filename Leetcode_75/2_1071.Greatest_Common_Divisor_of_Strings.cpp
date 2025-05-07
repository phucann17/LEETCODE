#include <iostream>
using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            string res;
            if (str1 + str2 != str2 + str1) return "";
            int a = str1.size(), b = str2.size();
            while (b != 0){
                int c = b;
                b = a % b;
                a = c;
            }
            for (int i = 0; i < a; i++){
                    res += str1[i];
            }
            return res;
        }
    };