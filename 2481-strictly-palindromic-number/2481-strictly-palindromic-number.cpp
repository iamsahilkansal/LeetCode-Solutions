class Solution {
public:
    bool toBase(int n, int b){
        string ans;
        while(n>0){
            ans.push_back((char)(n%b));
            n=n/b;
        }
        for(int i=0; i<ans.length()/2; i++){
            if(ans[i]!=ans[ans.length()-i-1]){
                return false;
            }
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            if(!toBase(n, i)){
                return false;
            }
        }
        return true;
    }
};