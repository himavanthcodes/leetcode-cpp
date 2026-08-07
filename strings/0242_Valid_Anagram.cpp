class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int>freq;
        for (char ch:s){
            freq[ch]++;
        }
        for (char ch:t){
            if (freq.find(ch) == freq.end() || freq[ch] == 0) return false;
            freq[ch]--;
        }
        return true;
        
    }
};