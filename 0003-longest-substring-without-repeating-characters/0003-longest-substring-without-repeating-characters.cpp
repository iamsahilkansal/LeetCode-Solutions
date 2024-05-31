class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0; i<n; i++){
            unordered_set<char>u;
            int a=0;
            for(int j=i; j<n; j++){
                if(u.find(s[j])!=u.end()){
                    break;
                }
                else{
                    u.insert(s[j]);
                    a++;
                }
            }
            ans=max(ans, a);
        }
        return ans;
    }
};