#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> s_map;
        map<char, int> t_map;
        for(char c: s) s_map[c]++;
        for(char c: t) t_map[c]++;
        for(auto pair: s_map){
            if(s_map[pair.first] != t_map[pair.first]) return false;

        }
        return true;
        
    }
};