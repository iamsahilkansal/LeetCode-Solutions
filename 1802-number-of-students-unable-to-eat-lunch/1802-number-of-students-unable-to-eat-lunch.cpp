class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>st;
        stack<int>san;
        for(int i=0; i<students.size(); i++){
            st.push(students[i]);
        }
        for(int i=sandwiches.size()-1; i>-1; i--){
            san.push(sandwiches[i]);
        }
        bool flag=flag;
        do{
            flag=false;
            for(int i=0; i<st.size(); i++){
                if(st.front()==san.top()){
                    san.pop();
                    st.pop();
                    flag=true;
                }
                else{
                    int a=st.front();
                    st.pop();
                    st.push(a);
                }
            }
        }while(flag);
        return st.size();
    }
};