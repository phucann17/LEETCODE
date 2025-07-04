#include <iostream>
using namespace std;

class Solution {
    public:
        string addBinary(string a, string b) {
            string res;
            int carry = 0;
            while(b.size() < a.size()) b = '0' + b;
            while(a.size() < b.size()) a = '0' + a;
            for (int i = a.size() - 1; i >= 0; i--){
                if (b[i] == '1' && a[i] == '1'){
                    if (carry == 0){
                        res = '0' + res;
                    }
                    else res = '1' + res;
                    carry = 1;
                }
                else if(b[i] == '0' && a[i] == '0'){
                    if (carry == 0){
                        res = '0' + res;
                    }
                    else {
                        res = '1' + res;
                        carry--;
                    }
                }
                else{
                    if (carry == 0){
                        res = '1' + res;
                    }
                    else{
                        res = '0' + res;
                        carry = 1;
                    }
                }
            }
            if (carry == 1) res = '1' + res;
            return res;
        }
    };