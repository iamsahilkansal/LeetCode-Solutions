class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr1=0, ptr2=0;
        while(ptr1<s.length() && ptr2<t.length()){
            if(s[ptr1]==t[ptr2]){
                ptr1++;
                ptr2++;
            }
            else{
                ptr2++;
            }
        }
        return ptr1==s.length();
    }
};