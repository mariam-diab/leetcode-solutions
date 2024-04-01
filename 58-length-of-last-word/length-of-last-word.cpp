class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count = 0;
        for(char c: s){
            if(c != ' ') count++;
            if(c == ' ' and count) break;
        }
        return count;
        
    }
};