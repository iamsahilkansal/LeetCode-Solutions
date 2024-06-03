class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low; i<=high; i++){
            string a=to_string(i);
            if(a.length()%2!=0){
                continue;
            }
            int first=0, last=0;
            for(int j=0; j<a.length()/2; j++){
                first+=a[j]-'0';
            }
            for(int j=a.length()/2; j<a.length(); j++){
                last+=a[j]-'0';
            }
            if(first==last){
                ans++;
            }
        }
        return ans;
    }
};