class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag1=true, flag2=true;
        for(int i=1; i<word.size(); i++){
            char x=word[i];
            if(int(x)>90){
                flag1=false;
            }
            if(int(x)<97){
                flag2=false;
            }
        }
        if(int(word[0])<=90 && flag1){
            return true;
        } 
        if(int(word[0])>=97 && flag2){
            return true;
        } 
        if(flag2) return true;
        return false;
    }
};