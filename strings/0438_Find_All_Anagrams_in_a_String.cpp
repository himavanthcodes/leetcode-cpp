class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>targetfreq(26,0);
        vector<int>windowfreq(26,0);
        vector<int> answer;
        for (char ch:p){
            targetfreq[ch-'a']++;
        }
        int left=0;
        for (int right=0;right<s.size();right++){
            windowfreq[s[right]-'a']++;
            if (right-left+1>p.size()){
                windowfreq[s[left]-'a']--;
                left++;
            }
            if (windowfreq==targetfreq){
                answer.push_back(left);

            }
        }
        return answer;

    }
};