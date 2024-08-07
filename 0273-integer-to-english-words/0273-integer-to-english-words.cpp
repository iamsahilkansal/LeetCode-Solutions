class Solution {
public:
    string numberToWords(int num) {
        vector<string> SValues = {"", "Thousand", "Million", "Billion"};
        vector<string> S1Values = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        vector<string> S2Values = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> S3Values = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> a;

        if (num == 0) {
            return "Zero";
        }

        int cnt = 0;
        string temp;
        while (num > 0) {
            if (cnt == 3) {
                cnt = 0;
                reverse(temp.begin(), temp.end());
                a.push_back(temp);
                temp.clear();
            } else {
                temp += to_string(num % 10);
                num /= 10;
                cnt++;
            }
        }

        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            a.push_back(temp);
        }

        reverse(a.begin(), a.end());
        string ans = "";
        for (int i = 0; i < a.size(); i++) {
            int temp1 = stoi(a[i]);
            a[i]=to_string(temp1);
            if (temp1 > 0) {
                if (a[i].length() == 1) {
                    ans += S3Values[temp1] + " ";
                    ans += SValues[a.size() - 1 - i] + " ";
                } 
                else if (a[i].length() == 2) {
                    if (temp1 >= 20) {
                        ans += S1Values[temp1 / 10 - 2] + " ";
                        if (temp1 % 10 > 0) {
                            ans += S3Values[temp1 % 10] + " ";
                        }
                        ans += SValues[a.size() - 1 - i] + " ";
                    } 
                    else {
                        ans += S2Values[temp1 - 10] + " ";
                        ans += SValues[a.size() - 1 - i] + " ";
                    }
                } 
                else if (a[i].length() == 3) {
                    ans += S3Values[temp1 / 100] + " Hundred ";
                    temp1 %= 100;
                    if (temp1 >= 20) {
                        ans += S1Values[temp1 / 10 - 2] + " ";
                        if (temp1 % 10 > 0) {
                            ans += S3Values[temp1 % 10] + " ";
                        }
                    } 
                    else if (temp1 >= 10) {
                        ans += S2Values[temp1 - 10] + " ";
                    } 
                    else if (temp1 > 0) {
                        ans += S3Values[temp1] + " ";
                    }
                    ans += SValues[a.size() - 1 - i] + " ";
                }
            }
        }
        cnt=0;int i=ans.length()-1;
        while(ans[i]==' '){
            cnt++;
            i--;
        }
        ans=ans.substr(0, ans.length()-cnt);
        return ans;
    }
};