class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>need;
        unordered_map<char,int>window;
        for (char ch:t){
            need[ch]++;
        }
        int required=need.size();
        int formed=0;
        int left=0;
        int minlength=INT_MAX;
        int startindex=0;
        for (int right=0;right<s.size();right++){
            char current=s[right];
            window[current]++;

            if (need.count(current) && window[current]==need[current]){
                formed++;
            }
            while (formed==required){
                if (right-left+1<minlength){
                    minlength=right-left+1;
                    startindex=left;
                }
                char removechar=s[left];
                window[removechar]--;
                if (need.count(removechar) && window[removechar]<need[removechar]){
                 formed--;
                }
                left++;
            }
        }
        if (minlength==INT_MAX){
            return "";
        }
        return s.substr(startindex,minlength);

    }
};