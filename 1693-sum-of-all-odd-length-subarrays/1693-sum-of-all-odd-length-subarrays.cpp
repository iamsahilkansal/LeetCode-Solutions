class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0; i<n; i++){
            int temp=0;
            int cnt=0;
            for(int j=i; j<n; j++){
                temp+=arr[j];
                cnt++;
                if(cnt%2!=0){
                    ans+=temp;
                }
            }
        }
        return ans;
    }
};