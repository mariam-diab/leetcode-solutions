class Solution {
public:
    string makeFancyString(string s) {
        char prev = ' '; int c = 1;
        string result;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == prev and c >= 2) c++;
            else if(s[i] == prev){
                c++;
                result += s[i];
            }
            else{
                c = 1;
                result += s[i];
                prev = s[i];

            }
        }
        return result;
        
    }
};