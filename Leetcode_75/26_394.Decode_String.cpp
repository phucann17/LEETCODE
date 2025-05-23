#include <iostream>
#include <stack>
using namespace std;
class Solution {
    public:
        string decodeString(string s) {
            stack<int> countStack;
            stack<string> stringStack;
            string currStr = "";
            int k = 0;
    
            for (char ch : s) {
                if (isdigit(ch)) {
                    k = k * 10 + (ch - '0');
                } else if (ch == '[') {
                    countStack.push(k);
                    stringStack.push(currStr);
                    currStr = "";
                    k = 0;
                } else if (ch == ']') {
                    string temp = currStr;
                    currStr = stringStack.top();
                    stringStack.pop();
                    int repeat = countStack.top();
                    countStack.pop();
                    while (repeat--) {
                        currStr += temp;
                    }
                } else {
                    currStr += ch;
                }
            }
    
            return currStr;
        }
    };
    