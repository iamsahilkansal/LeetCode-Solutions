class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1; i<strs.size(); i++){
            if(ans==strs[i]){
                continue;
            }
            //string temp=ans;
            int j=0;
            while(ans[j]==strs[i][j]){
                j++;
            }
            ans=ans.substr(0, j);
            cout<<ans<<" ";
        }
        return ans;
    }
};