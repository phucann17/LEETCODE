#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int sum1 = 0, sum2 = 0, maxVal = 0;
            for (int i = 0; i < nums.size(); i++){
                sum1 += nums[i];
            }
    
            for (int i = 0; i < nums.size() + 1; i++){
                sum2 += i;
            }
    
            return sum2 - sum1;
        }
    };