#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            sort(arr.begin(), arr.end());
            vector<int> tmp;
            
            int cnt = 1, j = 0, i = 0;
            while (i < arr.size()){
                cnt = 1;
                while (j + 1 < arr.size() && arr[j] == arr[j + 1]){
                    cnt++;
                    j++;
                }
                tmp.push_back(cnt);
                j++;
                i = j;
            }
            unordered_set<int> res(tmp.begin(), tmp.end());
            return tmp.size() == res.size();
        }
    };