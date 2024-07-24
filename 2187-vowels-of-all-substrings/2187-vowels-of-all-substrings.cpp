class Solution {
public:
    long long countVowels(string word) {
        string st="aeiou";
        long long ans=0;
        for(int i=0; i<word.length(); i++){
            if(st.find(word[i])<st.length()){
                ans+=(i+1)*(word.length()-i);
            }
        }
        return ans;
    }
};