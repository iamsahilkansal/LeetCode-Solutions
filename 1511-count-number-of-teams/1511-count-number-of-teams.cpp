class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt=0;
        int n=rating.size();
        for(int i=0; i<n; i++){
            int first=rating[i];
            for(int j=i+1; j<n; j++){
                if(rating[j]>rating[i]){
                    int second=rating[j];
                    for(int z=j+1; z<n; z++){
                        if(rating[z]>rating[j]){
                            cnt++;
                        }
                    }
                }

                if(rating[j]<rating[i]){
                    int second=rating[j];
                    for(int z=j+1; z<n; z++){
                        if(rating[z]<rating[j]){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};