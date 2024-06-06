class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        if(paths.size()==1){
            return paths[0][1];
        }
        string next=paths[0][1];
        bool flag=false;
        for(int i=0; i<paths.size(); i++){
            flag=false;
            for(int j=0; j<paths.size(); j++){
                if(paths[j][0]==next){
                    next=paths[j][1];
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                return next;
            }
        }
        return next;
    }
};