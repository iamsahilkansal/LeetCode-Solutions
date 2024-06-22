class Solution {
public:
    int kthFactor(int n, int k) {
        int temp=0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                temp++;
                if(temp==k){
                    return i;
                }
            }
        }
        return -1;
    }
};