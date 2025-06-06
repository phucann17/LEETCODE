#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> res;
            for (int i = 0; i < nums.size(); i++){
                res[nums[i]]++;
            }
    
            for (auto num : res){
                if (num.second > nums.size()/2){
                    return num.first;
                }
            }
            return 0;
        }
    };