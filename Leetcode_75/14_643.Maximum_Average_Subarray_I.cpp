#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            double maxVal = -10e5, sum = 0;
            for (int i = 0; i < k; i++){
                sum += nums[i];
            }
            maxVal = max(maxVal, sum);
            for (int i = k; i < nums.size(); i++){
                sum = sum + nums[i] - nums[i - k];
                maxVal = max(sum, maxVal);
            }
            return maxVal/k;
        }
    };