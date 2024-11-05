class Solution {
public:
    int minChanges(string s) {
        int min_chnages = 0;
        for(int i=0; i<s.size(); i++){
            int counter = 1;
            while(s[i] == s[i+1]){
                counter++;
                i++;
            }
            if(counter%2){
                min_chnages++;
                i++;
            }

        }

        return min_chnages;
        
    }
};