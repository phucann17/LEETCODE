#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int zero = 0, i = 0, j = 0, maxVal = 0;
            while (i < nums.size()){
                if (nums[i] == 0){
                    zero++;
                }
                if (zero > 1){
                    if (nums[j] == 0){
                        zero--;
                    }
                    j++;
                }
                maxVal = max(maxVal, i - j);
                i++;
            }
            return maxVal;
        }
    };