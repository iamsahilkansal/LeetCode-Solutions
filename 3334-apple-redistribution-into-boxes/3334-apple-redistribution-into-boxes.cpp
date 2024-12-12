class Solution {
public:
    static bool comp(int a, int b){
        return b<a;
    }
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), comp);
        int sum=0;
        for(auto x: apple){
            sum+=x;
        }
        for(auto x: capacity){
            cout<<x<<" ";
        }
        int temp=0, cnt=0;;
        for(auto x: capacity){
            if(x+temp>=sum){
                return cnt+1;
            }
            temp+=x;
            cnt++;
        }
        return -1;
    }
};