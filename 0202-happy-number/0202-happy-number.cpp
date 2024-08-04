class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        unordered_set<int>uset;
        while(n>1 && uset.find(n)==uset.end()){
            uset.insert(n);
            int temp1=0;
            while(n>0){
                int digit=n%10;
                temp1+=(digit*digit);
                n/=10;
            }
            if(temp1==1){
                return true;
            }
            n=temp1;
        }
        return false;
    }
};