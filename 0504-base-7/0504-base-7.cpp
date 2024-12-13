class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)return "0";
        int num2=abs(num);
        string ans="";
        while(num2>0){
            ans+=to_string(num2%7);
            num2/=7;
        }
        reverse(ans.begin(), ans.end());
        if(num<0){
            ans="-"+ans;
        }
        return ans;
    }
};