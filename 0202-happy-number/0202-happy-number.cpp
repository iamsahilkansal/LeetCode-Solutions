class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        unordered_set<int>uset;
        while(n>1 && uset.find(n)==uset.end()){
            uset.insert(n);
            int temp=n;
            int temp1=0;
            while(temp>0){
                int digit=temp%10;
                temp1=temp1+(digit*digit);
                temp/=10;
            }
            if(temp1==1){
                return true;
            }
            n=temp1;
        }
        return false;
    }
};