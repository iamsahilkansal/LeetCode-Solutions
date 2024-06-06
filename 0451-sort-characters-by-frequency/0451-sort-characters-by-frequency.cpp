class Solution {
public:
    struct var1 {
        char ch;
        int freq;
    };

    static bool comp(var1 v, var1 q){
        if(q.freq>=v.freq){
            return false;
        }
        return true;
    }

    string frequencySort(string s) {
        vector<int> temp(256, 0);
        for (char c : s) {
            temp[c]++;
        }

        vector<var1> temp1;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] != 0) {
                var1 v;
                v.ch = (char)i;
                v.freq = temp[i];
                temp1.push_back(v);
            }
        }
        sort(temp1.begin(), temp1.end(), comp);
        string ans;
        for(int i=0; i<temp1.size(); i++){
            ans.append(temp1[i].freq, temp1[i].ch);
        }
        return ans;
    }
};