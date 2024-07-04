class Solution {
public:
    const bool comp(pair<string, int>a, pair<string, int>b){
        return a.first<b.first;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, int>>temp;
        for(int i=0; i<strs.size(); i++){
            string a=strs[i];
            sort(a.begin(), a.end());
            temp.push_back({a, i});
        }
        
        sort(temp.begin(), temp.end());
        vector<vector<string>>ans;
        for(int i=0; i<temp.size(); i++){
            vector<string>temp1;
            string a=temp[i].first;
            {
                while(i<temp.size() && temp[i].first==a){
                    temp1.push_back(strs[temp[i].second]);
                    i++;
                }
                i--;
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};