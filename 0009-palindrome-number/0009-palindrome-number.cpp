#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        string str1=str;
        int n = str1.length();
        for (int i = 0; i < n / 2; i++){
            swap(str1[i], str1[n - i - 1]);
        }
        if(str==str1){
            return true;
        }
        else{
            return false;
        }
    }
};
