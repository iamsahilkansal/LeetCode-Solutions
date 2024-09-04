class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        int i=0;
        while(i<n){
            ans=ans^(start+2*i);
            i++;
        }
        return ans;
    }
};