class Solution {
public:
    int startIndex=0;
    int maxLength=1;
    
    void expand(string &s, int left, int right) {

        while (left >= 0 &&
               right < s.size() &&
               s[left] == s[right]) {

            int currentLength = right - left + 1;

            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = left;
            }

            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i);
            expand(s, i, i + 1);
        }

        return s.substr(startIndex, maxLength);
    }
};