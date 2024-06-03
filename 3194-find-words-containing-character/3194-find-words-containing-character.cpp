class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0; i<words.size(); i++){
            for(char a: words[i]){
                if(a==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};