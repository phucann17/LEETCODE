#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            vector<int> res;
            for (int i = 0; i < asteroids.size(); i++){
                bool isDestroyed = 0;
                while (!res.empty() && res[res.size() - 1] > 0 && asteroids[i] < 0){
                    if (res[res.size() - 1] < -asteroids[i]){
                        res.pop_back();
                    }
                    else if (res[res.size() - 1] == -asteroids[i]){
                        res.pop_back();
                        isDestroyed = 1;
                        break;
                    }
                    else{
                        isDestroyed = 1;
                        break;
                    }
                }
                if (!isDestroyed) res.push_back(asteroids[i]);
            }
            return res;
        }
    };