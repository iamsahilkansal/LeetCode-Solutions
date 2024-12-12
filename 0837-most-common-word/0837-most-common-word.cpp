class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> umap;
        unordered_set<string> uset(banned.begin(), banned.end());
        string temp = "";

        for (int i = 0; i <= paragraph.length(); i++) {
            if (i == paragraph.length() || !isalpha(paragraph[i])) {
                if (!temp.empty() && uset.find(temp) == uset.end()) {
                    umap[temp]++;
                }
                temp = "";
            } 
            else {
                temp += tolower(paragraph[i]);
            }
        }

        string name = "";
        int ans = INT_MIN;

        for (auto x : umap) {
            if (x.second > ans) {
                ans = x.second;
                name = x.first;
            }
        }
        return name;
    }
};
