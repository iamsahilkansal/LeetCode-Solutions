class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            int x=i;
            int temp=0;
            while(x>0){
                temp+=x%2;
                x/=2;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};