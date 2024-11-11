class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        int n=tokens.size();
        for(int i=0; i<n; i++){
            if(tokens[i]=="+"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b+a);
            }
            else if(tokens[i]=="/"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b/a);
            }
            else if(tokens[i]=="-"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b-a);
            }
            else if(tokens[i]=="*"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(b*a);
            }
            else{
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};