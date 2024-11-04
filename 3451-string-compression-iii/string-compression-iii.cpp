class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        for(int i=0; i<word.size(); i++){
            int prefix = 1;
            while(prefix < 9 && word[i] == word[i+1]){
                prefix++;
                i++;
            }
            comp += '0' + prefix;
            comp += word[i];
        }
        return comp;
        
    }
};