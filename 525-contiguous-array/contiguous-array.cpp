class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // int zeros = 0, ones = 0;
        // for(int n: nums){
        //     if(n == 1) ones++;
        //     else zeros++;
        // }
        // return min(zeros, ones)*2;
        unordered_map<int, int> mp{{0, -1}};
        int mx = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count = count + (nums[i] == 1 ? 1 : -1);
            if (mp.find(count) != mp.end()) mx = max(mx, i - mp[count]);
            else mp[count] = i;
        }
        return mx;
        
    }
};