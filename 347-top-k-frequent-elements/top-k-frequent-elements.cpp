#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int n : nums) count[n] += 1;
        vector<vector<int>> freq( nums.size() + 1);
        for (auto p : count) freq[p.second].push_back(p.first);
        vector<int> res;
        int n = freq.size();
        while(k && n) {
            if(!freq[--n].empty()){
                for(int num : freq[n]) {
                    if(k-- == 0) break;
                    res.push_back(num);

                }
            }
        }
        return res;
    }
};