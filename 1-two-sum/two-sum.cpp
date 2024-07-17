#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // if the given array were initially sorted:
        // int left = 0, right = nums.size() - 1;
        // while(left <= right){
        //     int curr_sum = nums[left] + nums[right];
        //     if(curr_sum == target) return {left, right};
        //     else if(curr_sum > target) right--;
        //     else left++;
        // }
        // return {};
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            if(mp[target-nums[i]]) return {i, mp[target-nums[i]]-1};
            mp[nums[i]] = i+1;
        }
        return {};
    }
};