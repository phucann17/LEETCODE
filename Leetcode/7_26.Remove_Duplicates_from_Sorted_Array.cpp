#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if (nums.size() == 0) return 0;
            int pos = 0;
            for (int i = 1; i < nums.size(); i++){
                if (nums[pos] != nums[i]){
                    pos++;
                    nums[pos] = nums[i];
                }
            }
            return pos + 1;
        }
    };