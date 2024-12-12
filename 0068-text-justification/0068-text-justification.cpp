class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int x = 0;
        
        while (x < n) {
            int lineLength = words[x].length();
            int i = x + 1;
            
            while (i < n && lineLength + 1 + words[i].length() <= maxWidth) {
                lineLength += 1 + words[i].length();
                i++;
            }
            
            int numWords = i - x;
            int totalSpaces = maxWidth - lineLength + (numWords - 1);
            
            string temp = "";
            
            if (i == n || numWords == 1) {
                for (int j = x; j < i; j++) {
                    temp += words[j];
                    if (j < i - 1) temp += " ";
                }
                temp += string(maxWidth - temp.length(), ' ');
            } 
            else {
                int spacesPerGap = totalSpaces / (numWords - 1);
                int extraSpaces = totalSpaces % (numWords - 1);
                
                for (int j = x; j < i - 1; j++) {
                    temp += words[j];
                    temp += string(spacesPerGap + (extraSpaces > 0 ? 1 : 0), ' ');
                    if (extraSpaces > 0) extraSpaces--;
                }
                temp += words[i - 1];
            }
            
            ans.push_back(temp);
            x = i;
        }
        
        return ans;
    }
};
