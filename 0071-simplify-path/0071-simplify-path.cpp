class Solution {
public:
    string simplifyPath(string path) {
        vector<string>arr;
        string temp="";
        int n=path.length();
        for(int i=0; i<n; i++){
            if(path[i]=='/'){
                if(!temp.empty()){
                    arr.push_back(temp);
                    temp.clear();
                }
            }
            else{
                temp+=path[i];
            }
        }
        if(!temp.empty()){
            arr.push_back(temp);
            temp.clear();
        }
        stack<string>stk;
        n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]=="."){
                continue;
            }
            if(arr[i]==".."){
                if(!stk.empty()){
                    stk.pop();
                }

            }
            else{
                stk.push(arr[i]);
            }
        }
        string ans="";
        arr.clear();
        while(!stk.empty()){
            arr.push_back(stk.top());
            stk.pop();
        }
        reverse(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            ans+="/";
            ans+=arr[i];
        }
        if(ans.length()==0){
            return "/";
        }
        return ans;
    }
};