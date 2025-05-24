#include <iostream>
using namespace std;
#include <queue>
class Solution {
    public:
        string predictPartyVictory(string senate) {
            queue<int> radi, dire;
            int sz = senate.size();
            for (int i = 0; i < sz; i++){
                if (senate[i] == 'R'){
                    radi.push(i);
                }
                else dire.push(i);
            }
            while (!dire.empty() && !radi.empty()){
                if (radi.front() < dire.front()) radi.push(sz++);
                else dire.push(sz++);
                radi.pop(); dire.pop();
            }
            return radi.size() >= dire.size() ? "Radiant" : "Dire";
        }
    };