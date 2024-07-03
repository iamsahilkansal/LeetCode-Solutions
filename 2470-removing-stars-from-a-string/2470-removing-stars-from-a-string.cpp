class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(int i=0; i<s.length(); i++){
            if(s[i]!='*'){
                stk.push(s[i]);
            }
            else{
                stk.pop();
            }
        }
        string ans;
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        for(int i=0; i<ans.length()/2; i++){
            swap(ans[i], ans[ans.length()-i-1]);
        }
        return ans;
    }
};