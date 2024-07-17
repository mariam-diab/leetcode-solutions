class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> freq;
        for(int n: nums){
            freq[n]++;
            if(freq[n]>1) return true;
        }
        return false;
        
    }
};