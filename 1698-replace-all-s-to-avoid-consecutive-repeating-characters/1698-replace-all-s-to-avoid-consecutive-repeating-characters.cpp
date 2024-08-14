class Solution {
public:
    string modifyString(string s) {
        if(s[0]=='?'){
            for(char z='a'; z<='z'; z++){
                if(s[1]!=z){
                    s[0]=z;
                    break;
                }
            }
        }
        for(int i=1; i<s.length()-1; i++){
            if(s[i]=='?'){
                for(char z='a'; z<='z'; z++){
                    if(s[i-1]!=z && s[i+1]!=z){
                        s[i]=z;
                        break;
                    }
                }
            }
        }
        if(s[s.length()-1]=='?'){
            for(char z='a'; z<='z'; z++){
                if(s[s.length()-2]!=z){
                    s[s.length()-1]=z;
                    break;
                }
            }
        }
        return s;
    }
};