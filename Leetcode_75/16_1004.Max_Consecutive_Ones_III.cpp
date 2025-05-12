#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int zero = 0, maxVal = 0, i = 0, j = 0;
            while (i < nums.size()){
                if (nums[i] == 0){
                    zero++;
                }
                if (zero > k){
                    if (nums[j] == 0){
                        zero--;
                    }
                    j++;
                }
                maxVal = max(i - j + 1, maxVal);
                i++;
            }
            return maxVal;
        }
    };