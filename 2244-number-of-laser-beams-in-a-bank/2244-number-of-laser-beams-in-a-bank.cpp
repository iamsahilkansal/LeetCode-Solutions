class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int i = 0;
        int n = bank.size();
        int prev = 0;
        while (i < n && prev == 0) {
            prev = count(bank[i].begin(), bank[i].end(), '1');
            i++;
        }
        
        int ans = 0;
        while (i < n) {
            int curr = count(bank[i].begin(), bank[i].end(), '1');
            if (curr > 0) {
                ans += curr * prev;
                prev = curr; 
            }
            i++;
        }
        
        return ans;
    }
};
