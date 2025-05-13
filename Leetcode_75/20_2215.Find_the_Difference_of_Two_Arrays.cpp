#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int> tmp1(nums1.begin(), nums1.end());
            unordered_set<int> tmp2(nums2.begin(), nums2.end());
            vector<int> res1, res2;
            for (int num : tmp1){
                if (tmp2.find(num) == tmp2.end()){
                    res1.push_back(num);
                }
            }
            for (int num : tmp2){
                if (tmp1.find(num) == tmp1.end()){
                    res2.push_back(num);
                }
            }
            return {res1, res2};
        }
    };