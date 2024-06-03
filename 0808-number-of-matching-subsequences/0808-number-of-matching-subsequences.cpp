class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        string word="";
        int ptr1, ptr2;
        sort(words.begin(), words.end());
        for(int i=0; i<words.size(); i++){
            if(word==words[i]){
                ans++;
                continue;
            }
            else{
                ptr1=0, ptr2=0;
                while(ptr1<s.length() && ptr2<words[i].length()){
                    if(s[ptr1]==words[i][ptr2]){
                        ptr2++;
                    }
                    ptr1++;
                }
                if(ptr2==words[i].length()){
                    word=words[i];
                    ans++;
                }
            }
        }
        return ans;
    }
};