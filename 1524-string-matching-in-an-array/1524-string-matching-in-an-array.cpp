class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string>uset;
        vector<string>ans;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(words[j].find(words[i])<words[j].length() && uset.find(words[i])==uset.end()){
                    ans.push_back(words[i]);
                    uset.insert(words[i]);
                }
                if(words[i].find(words[j])<words[i].length() && uset.find(words[j])==uset.end()){
                    ans.push_back(words[j]);
                    uset.insert(words[j]);
                }
            }
        }
        return ans;
    }
};