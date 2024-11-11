class Solution {
public:
    bool isCircularSentence(string s) {
        int n=s.length();
        vector<string>arr;
        string temp="";
        for(int i=0; i<n; i++){
            if(s[i]==' '){
                if(!temp.empty()){
                    arr.push_back(temp);
                    temp.clear();
                }
            }
            else{
                temp+=s[i];
            }
        }
        if(!temp.empty()){
            arr.push_back(temp);
            temp.clear();
        }
        n=arr.size();
        for(int i=0; i<n; i++){
            //cout<<arr[i][arr[i].size()-1]<<" "<<arr[(i+1)%n][0]<<endl;
            if(arr[i][arr[i].size()-1]!=arr[(i+1)%n][0]){
                return false;
            }
        }
        return true;
    }
};