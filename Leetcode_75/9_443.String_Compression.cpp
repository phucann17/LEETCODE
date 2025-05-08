#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int compress(vector<char>& chars) {
            string res, tmp;
            for (int i = 0; i <= chars.size(); i++){
                if (tmp.empty() && chars.size()){
                    tmp += chars[i];
                    continue;
                }
    
                if (i < chars.size() && tmp.find(chars[i]) <= tmp.size()){
                    tmp += chars[i];
                }
                else{
                    int sz = tmp.size();
                    if (sz == 1){
                        res += tmp[0];
                    }
                    else{
                        res = res.append(tmp[0] + to_string(sz));
                    }
                    if (i != chars.size()){
                        tmp = "";
                        tmp += chars[i];
                    }
                }
            }
            for (int i = 0; i < res.size(); i++){
                chars[i] = res[i];
            }
            return res.size();
        }
    };