class Solution {
public:
    bool isCircularSentence(string sentence) {
        for(int i = 1; i<= sentence.size(); i++){
            if(sentence[i] == ' '){
                if(sentence[i-1]==sentence[i+1]) continue;
                else return false;
            }
        }
        if(sentence[0] == sentence[sentence.size()-1]) return true;
        else return false;
        
    }
};