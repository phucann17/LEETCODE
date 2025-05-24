#include <iostream>
using namespace std;
#include <queue>

class RecentCounter {
    public:
        RecentCounter() {
            
        }
        queue<int> res;
        int ping(int t) {
            res.push(t);
            while (res.front() < t - 3000){
                res.pop();
            }
            return res.size();
        }
    };
    
    /**
     * Your RecentCounter object will be instantiated and called as such:
     * RecentCounter* obj = new RecentCounter();
     * int param_1 = obj->ping(t);
     */