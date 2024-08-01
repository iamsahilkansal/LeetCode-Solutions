class Solution {
public:
    int countSeniors(vector<string>& details) {
        int counter=0;
        int age;
        for(int i=0; i<details.size(); i++){
            age=(details[i][11]-'0')*10 + (details[i][12]-'0');
            if(age>60){
                counter++;
            }
        }
        return counter;
    }
};