class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int n=digits.size();
        for(int i=n-1; i>-1; i--){
            int temp=digits[i]+carry;
            carry=temp/10;
            digits[i]=temp%10;
        }
        reverse(digits.begin(), digits.end());
        if(carry!=0){
            digits.push_back(carry);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};