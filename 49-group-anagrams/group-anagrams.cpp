#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        for(string s: strs){
            vector<int>count(26, 0);
            for(char c: s){
                count[c-'a']++;
            }
            mp[count].push_back(s);

        }
        vector<vector<string>> res;
        for(auto p: mp){
            res.push_back(p.second);
        }
        return res;
        
    }
};