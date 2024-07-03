class Solution {
public:
    string sortVowels(string s) {
        vector<char>vow;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
               s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vow.push_back(s[i]);
               }
        }
        string ans;
        int ptr=0;
        sort(vow.begin(), vow.end());
        for(int i=0; i<s.length(); i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
               s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                ans.push_back(vow[ptr]);
                ptr++;
               }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};