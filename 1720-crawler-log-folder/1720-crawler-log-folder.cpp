class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>stk;
        stk.push("Main");
        for(auto it: logs){
            if(it[0]!='.'){
                stk.push(it);
            }
            if(it.substr(0, 2)==".."){
                if(stk.top()!="Main"){
                    stk.pop();
                }
            }
        }
        return stk.size()-1;
    }
};