class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        for(int i=0; i<=n-3; i++){
            if(arr[i]%2!=0){
                bool flag=true;
                for(int j=i; j<i+3; j++){
                    if(arr[j]%2==0){
                        flag=false;
                        break;
                    }
                }  
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }
};