class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0; i<s.size(); i++){
            if(s[i] == goal[0]){
                string possible_rotated = s.substr(i % s.size()) + s.substr(0, i);
                if(possible_rotated == goal) return true;
            }
        }
        return false;
        
    }
};