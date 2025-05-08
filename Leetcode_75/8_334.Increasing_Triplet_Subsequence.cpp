#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool increasingTriplet(vector<int>& nums) {
            int a = INT_MAX, b = INT_MAX;
            for (int i = 0; i < nums.size(); i++){
                if (a >= nums[i]) a = nums[i];
                else if (b >= nums[i]) b = nums[i];
                else return 1;
            }
            return false;
        }
    };