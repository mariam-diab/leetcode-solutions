class Solution {
public:
    int longestPalindrome(string s) {
        vector <int> freq(58);
        for(auto c: s) freq[c-'A']++;
        bool odd = false;
        int count = 0;
        for(auto c: freq){
            if(c%2) odd=true;
            count += c/2*2;
        }
        return count+int(odd);
        
    }
};
void FastIO(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
static const auto _____ = []()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        return nullptr;
    }();