class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string ans=words[0];
        for(int i=1; i<words.size(); i++){
            string temp;
            for(int j=0; j<ans.size(); j++){
                if(words[i].find(ans[j])<words[i].length()){
                    words[i][words[i].find(ans[j])]='0';
                    temp.push_back(ans[j]);
                }
            }
            ans=temp;
        }
        vector<string>val;
        for(int i=0; i<ans.size(); i++){
            string temp(1, ans[i]);
            val.push_back(temp);
        }
        return val;
    }
};