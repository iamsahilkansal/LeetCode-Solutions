class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans=0;
        int ptr1=0, ptr2=0;
        while(ptr2<t.length() && ptr1<s.length()){
            if(s[ptr1]==t[ptr2]){
                ptr1++;
                ptr2++;
            }
            else{
                ptr1++;
            }
        }
        return t.length()-ptr2;
    }
};