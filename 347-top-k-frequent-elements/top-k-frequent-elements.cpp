#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> count;
        for (int n : nums) count[n] += 1;
        multimap<int, int> order;
        for (auto p : count) order.insert({p.second, p.first});
        auto it = order.end();
        vector<int> res;
        while (k--) {
            res.push_back((--it)->second);
        }
        return res;
    }
};