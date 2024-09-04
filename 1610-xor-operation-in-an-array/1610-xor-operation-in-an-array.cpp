class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        n--;
        while(n){
            ans=ans^(start+2*n);
            n--;
        }
        return ans;
    }
};