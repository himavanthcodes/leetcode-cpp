class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minfreq(26, 0);
        //countfreqinfirstword
        for (char ch:words[0]){
            minfreq[ch-'a']++;

        }
        for (int i=1;i<words.size();i++){
            vector<int>currentfreq(26,0);
            for (char ch:words[i]){
                currentfreq[ch-'a']++;
            }
            for (int j=0;j<26;j++){
                minfreq[j]=min(minfreq[j],currentfreq[j]);
            }
        }
        vector<string>answer;
        for (int i=0;i<26;i++){
            while(minfreq[i]>0){
                answer.push_back(string(1, 'a' + i));
                minfreq[i]--;

            }
        }
        return answer;

     
    }
};