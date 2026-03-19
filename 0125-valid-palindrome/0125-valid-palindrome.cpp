class Solution {
    bool isUpper(char c){
        return (c >= 'A' && c <= 'Z');
    }

    bool isDigit(char c){
        return (c >= '0' && c <= '9');
    }

    char toLower(char c){
        if(isUpper(c)){
            return c + 32;
        }
        return c;
    }
public: 
    bool isPalindrome(string s) {
        string parsedS = "";
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(!isalnum(c)) continue;
            if(isDigit(c)){
                parsedS += c;
            }else if(isUpper(c)){
                parsedS += toLower(c);
            } else parsedS += c;
        }
        int n = parsedS.size();
        for(int i = 0; i < n/2; i++){
            if(parsedS[i] != parsedS[n-i-1]){
                return false;
            }
        }
        return true;
    }
};