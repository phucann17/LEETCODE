#include <iostream>
using namespace std;
class Solution {
    public:
        string convertToTitle(int columnNumber) {
            string res;
            while (columnNumber > 0){
                columnNumber--;
                char c = 'A' + (columnNumber % 26);
                res = c + res;
                columnNumber = columnNumber / 26;
            }
            return res;
        }
    };