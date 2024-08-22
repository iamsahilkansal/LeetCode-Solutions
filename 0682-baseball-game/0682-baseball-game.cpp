class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>stk;
        for(int i=0; i<op.size(); i++){
            if(op[i]=="+"){
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.push(a);
                stk.push(a+b);
            }
            else if(op[i]=="C"){
                stk.pop();
            }
            else if(op[i]=="D"){
                stk.push(2*stk.top());
            }
            else{
                stk.push(stoi(op[i]));
            }
        }
        int ans=0;
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        return ans;
    }
};