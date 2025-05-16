#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
    public:
        int equalPairs(vector<vector<int>>& grid) {
            if (grid.size() == 0) return 0;
            int cnt = 0, i = 0, j = 0;
            map<vector<int>, int> res;
            while (i < grid.size()){
                vector<int> tmp;
                while (j < grid.size()){
                    tmp.push_back(grid[j][i]);
                    j++;
                }
                j = 0;
                res[tmp]++;
                i++;
            }
            for (int k = 0; k < grid.size(); ++k){
                cnt += res[grid[k]];
            }
            return cnt;
        }
    };


