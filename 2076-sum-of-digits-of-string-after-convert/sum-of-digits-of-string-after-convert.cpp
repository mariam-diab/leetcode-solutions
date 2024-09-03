class Solution {
public:
    int getLucky(string s, int k) {
        string result = "";
        for(int i = 0; i < s.size(); i++) {
            int position = s[i] - 'a' + 1; 
            result += to_string(position);
        }
        while(k--){
            int sum = 0;
            for (char digit : result) sum += digit - '0';
            result = to_string(sum);
        }
        return stoi(result);
        
    }
};