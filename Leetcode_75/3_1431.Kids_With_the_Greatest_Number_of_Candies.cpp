#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> res(candies.size(), true);
            for (int i = 0; i < res.size(); i++){
                int tmp = candies[i] + extraCandies;
                for (int j = 0; j < candies.size(); j++){
                    if (tmp < candies[j]){
                        res[i] = false;
                        break;
                    }
                }
            }
            return res;
        }
    };