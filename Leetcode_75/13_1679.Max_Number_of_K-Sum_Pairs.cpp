#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int left = 0, right = nums.size() - 1, cnt = 0;
            while (left < right){
                int sum = nums[left] + nums[right];
                    if (sum == k){
                        cnt++;
                        right--;
                        left++;
                    }
    
                    else if (sum < k) left++;
                    else right--;
            }
            return cnt;
        }
    };