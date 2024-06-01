class Solution {
public:
    int hardestWorker(int no, vector<vector<int>>& logs) {
        int n=logs.size();
        int start=0;
        int ansId=-1;
        int diffAns=INT_MIN;
        for(int i=0; i<n; i++){
            int diff=logs[i][1]-start;
            if(diff>diffAns){
                diffAns=diff;
                ansId=logs[i][0];
            }
            else if(diff==diffAns){
                ansId=min(ansId, logs[i][0]);
            }
            start=logs[i][1];
        }
        return ansId;
    }
};