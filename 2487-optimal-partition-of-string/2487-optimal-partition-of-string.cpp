class Solution {
public:
    int partitionString(string s) {
        int n=s.length();
        int ans=0;
        unordered_set<char> temp;
        for(int i=0; i<n; i++){
            if(temp.find(s[i])!=temp.end()){
                ans++;
                temp.clear();
                temp.insert(s[i]);
            }
            else{
                temp.insert(s[i]);
            }
        }
        return ans+1;
    }
};