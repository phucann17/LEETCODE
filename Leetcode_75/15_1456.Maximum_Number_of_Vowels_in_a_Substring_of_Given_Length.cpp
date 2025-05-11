#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int maxVowels(string s, int k) {
            vector<bool> isVow(128, false);
            isVow['a'] = isVow['e'] = isVow['i'] = isVow['o'] = isVow['u'] = true;
            int cnt = 0, maxVal = 0;
            for (int i = 0; i < k; i++){
                cnt += isVow[s[i]];
            }
            maxVal = max(maxVal, cnt);
            for (int i = k; i < s.size(); i++){
                cnt = cnt + isVow[s[i]] - isVow[s[i - k]];
                maxVal = max(maxVal, cnt);
            }
            return maxVal;
        }
    };