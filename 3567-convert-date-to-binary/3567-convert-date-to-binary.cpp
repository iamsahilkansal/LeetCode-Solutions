class Solution {
public:
    string toBin(string date){
        int a=stoi(date);
        string ans="";
        while(a>0){
            ans+=to_string(a%2);
            a=a/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        string ans="";
        string temp="";
        for(int i=0; i<date.length(); i++){
            if(date[i]=='-'){
                ans+=toBin(temp);
                ans+="-";
                temp.clear();
            }
            else{
                temp+=date[i];
            }
        }
        ans+=toBin(temp);
        return ans;
    }
};