class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=n-1; i>-1; i--){
            if((num[i]-'0')%2!=0){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};