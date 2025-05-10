#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int max_value = 0;
            int left = 0, right = height.size() - 1;
            while (left < right){
                max_value = max(max_value, (right - left)*min(height[right], height[left]));
                if (height[left] < height[right]) left++;
                else right--;
            }
            return max_value;
        }
    };