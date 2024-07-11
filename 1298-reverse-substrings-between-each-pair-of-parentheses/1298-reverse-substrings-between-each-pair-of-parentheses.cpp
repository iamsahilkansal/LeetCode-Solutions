class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>stk;
        int n=s.length();
        for(auto x: s){
            if(x==')'){
                string temp;
                while(!stk.empty() && stk.top()!='('){
                    temp.push_back(stk.top());
                    stk.pop();
                }
                stk.pop();
                for(auto c: temp){
                    stk.push(c);
                }
            }
            else{
                stk.push(x);
            }
        }
        string ans="";
        while(!stk.empty()){
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};