class Solution {
public:
    int solve(int &n){
        for(int x=1; x<n; x++){
            if(n%x==0){
                n=n-x;
                return x;
            }
        }
        return -1;
    }
    bool divisorGame(int n) {
        while(n>0){
            int x=solve(n);
            if(x==-1){
                return false;
            }
            int y=solve(n);
            if(y==-1){
                return true;
            }
        }
        return false;
    }
};