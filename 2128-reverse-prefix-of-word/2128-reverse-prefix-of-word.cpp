class Solution {
public:
    string reversePrefix(string word, char ch) {
        int fir;
        for(int i=0; i<word.length(); i++){
            if(word[i]==ch){
                fir=i+1;
                break;
            }
        }
        for(int i=0; i<fir/2; i++){
            swap(word[i], word[fir-i-1]);
        }
        return word;
    }
};