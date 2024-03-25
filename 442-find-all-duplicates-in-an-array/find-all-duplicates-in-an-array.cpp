class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        if(nums.empty()) return {};
        for(int i=0;i<nums.size();i++){
            int j = abs(nums[i]) - 1;
            if (nums[j] > 0) nums[j] = (-nums[j]);
            else duplicates.push_back(abs(nums[i])); 
        }
        return duplicates;
        
        
    }
};