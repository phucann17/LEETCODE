#include <iostream>
using namespace std;

class Solution {
    public:
        string reverseWords(string s) {
            string res, tmp;
            int i = s.size() - 1;
            while (i >= 0){
                while (i >= 0 && s[i] == ' ') i--;
                if (i < 0) break;
                tmp = "";
                while (i >= 0 && s[i] != ' '){
                    tmp = s[i] + tmp;
                    i--;
                }
                if (!res.empty()) res += ' ';
                res.append(tmp);
            }
            return res;
        }
    };