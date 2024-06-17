class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        for(int i=1; i<=sqrt(c); i++){
            int temp=sqrt(c-i*i);
            if(i*i+temp*temp==c){
                return true;
            }
        }
        return false;
    }
};