class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ptr1=0, ptr2=0;
        int ans=0;
        while(ptr1<g.size() && ptr2<s.size()){
            if(s[ptr2]>=g[ptr1]){
                ptr1++, ans++;
            }
            ptr2++;
        }
        return ans;
    }
};