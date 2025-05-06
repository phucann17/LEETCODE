#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            if (flowerbed.size() == 1 && !flowerbed[flowerbed.size() - 1]){
                --n;
                flowerbed[flowerbed.size() - 1] = 1;
            }
            else if (!flowerbed[0] && !flowerbed[1]){
                --n;
                flowerbed[0] = 1;
            }
            if (!flowerbed[flowerbed.size() - 1] && !flowerbed[flowerbed.size() - 2]){
                --n;
                flowerbed[flowerbed.size() - 1] = 1;
            }
            for (int i = 1; i < flowerbed.size() - 1; i++){
                if (!flowerbed[i] && !flowerbed[i - 1] && !flowerbed[i + 1]){
                    flowerbed[i] = 1;
                    --n;
                }
            }
            return n <= 0;
        }
    };