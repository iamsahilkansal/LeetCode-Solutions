class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        //unordered_set<string> uset;
        string word="";
        sort(words.begin(), words.end());
        for(int i=0; i<words.size(); i++){
            /*if(uset.find(words[i])!=uset.end()){
                ans++;
            }*/
            if(word==words[i]){
                ans++;
                continue;
            }
            else{
                int ptr1=0, ptr2=0;
                while(ptr1<s.length() && ptr2<words[i].length()){
                    if(s[ptr1]==words[i][ptr2]){
                        ptr1++;
                        ptr2++;
                    }
                    else{
                        ptr1++;
                    }
                }
                if(ptr2==words[i].length()){
                    //uset.insert(words[i]);
                    word=words[i];
                    ans++;
                }
            }
        }
        return ans;
    }
};