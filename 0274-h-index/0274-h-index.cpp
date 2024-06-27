class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(), cit.end());
        int minVal=INT_MAX, cnt=0, n=cit.size();
        for(int i=n-1; i>-1; i--){
            minVal=min(minVal, cit[i]);
            cnt++;
            if(cnt>minVal){
                cnt--;
                break;
            }
        }
        return cnt;
    }
};