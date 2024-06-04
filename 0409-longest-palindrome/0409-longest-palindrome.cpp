class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>map;

        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }
        int sin=0, dou=0;
        for(auto itr: map){
            dou+=itr.second/2;
            sin+=itr.second%2;
        }
        if(sin>0){
            return dou*2+1;
        }
        return dou*2;
    }
};