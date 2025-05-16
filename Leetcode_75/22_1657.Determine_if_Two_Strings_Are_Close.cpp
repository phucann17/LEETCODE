#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            if (word1.size() != word2.size()) return false;
    
            vector<int> tmp1(26, 0), tmp2(26, 0);
            set<char> res1, res2;
    
            for (char digit : word1){
                tmp1[digit - 'a']++;
                res1.insert(digit);
            }
    
            for (char digit : word2){
                tmp2[digit - 'a']++;
                res2.insert(digit);
            }
    
            sort(tmp1.begin(), tmp1.end());
            sort(tmp2.begin(), tmp2.end());
    
            return tmp1 == tmp2 && res1 == res2;
        }
    };