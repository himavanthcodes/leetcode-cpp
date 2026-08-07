class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s1.size()>s2.size()){
            return false;
        }
        vector<int> targetfreq(26,0);
        vector<int> windowfreq(26,0);
        
        //s1 frequencies add chey
        for (char ch:s1){
            targetfreq[ch-'a']++;
        }

        int left=0;
        for (int right=0;right<s2.size();right++){
            windowfreq[s2[right]-'a']++;
            if (right-left+1>s1.size()){
                windowfreq[s2[left]-'a']--;
                left++;
            }
            if (windowfreq==targetfreq){
                return true;
            }
        }
        return false;
    
    }
};