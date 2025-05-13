#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int sum = 0, maxVal = 0;
            for (int i = 0; i < gain.size(); i++){
                sum += gain[i];
                maxVal = max(maxVal, sum);
            }
            return maxVal;
        }
    };