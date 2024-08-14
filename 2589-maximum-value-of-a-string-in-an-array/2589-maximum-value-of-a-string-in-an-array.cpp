class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=-1;
        for(int i=0; i<strs.size(); i++){
            bool flag=true;
            for(int j=0; j<strs[i].length(); j++){
                if(!isdigit(strs[i][j])){
                    flag=false;
                    break;
                }
            }
            if(!flag){
                ans=max(ans, (int)strs[i].length());
            }
            else{
                ans=max(ans, stoi(strs[i]));
            }
        }
        return ans;
    }
};