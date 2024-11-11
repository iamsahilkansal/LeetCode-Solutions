class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int n=s.length();
        for(int i=0; i<n; i++){
            int cnt=0;
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
                cnt++;
            }
            if(cnt>=3){
                for(int z=i; z<i+2; z++){
                    ans+=s[z];
                }
                i=j-1;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};