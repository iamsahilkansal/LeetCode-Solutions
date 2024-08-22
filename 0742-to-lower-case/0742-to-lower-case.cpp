class Solution {
public:
    string toLowerCase(string s) {

        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i]) && int(s[i])<97){
                s[i]=s[i]+32;
            }
        }

        return s;
    }
};