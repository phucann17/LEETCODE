#include <iostream>
using namespace std;
#include <vector>
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxVal = nums[0];
            int curr = nums[0];
            for (int i = 1; i < nums.size(); i++){
                curr = curr < 0 ? 0 : curr;
                curr = curr + nums[i];
                maxVal = max(maxVal, curr);
            }
            return maxVal;
        }
    };