class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>temp;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                int a=0;
                int j=0;
                while(isdigit(s[i])){
                    a=a*10+s[i]-'0';
                    i++;
                    j++;
                }
                if(i!=j){
                    j--;
                }
                temp.push_back(a);
            }
        }
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i+1]<=temp[i]){
                return false;
            }
        }
        return true;
    }
};