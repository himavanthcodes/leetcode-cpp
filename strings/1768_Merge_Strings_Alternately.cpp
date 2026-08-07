class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer="";
        int i=0;
        int j=0;
        while (i<word1.size() && j<word2.size()){
            answer+=word1[i];
            i++;
            answer+=word2[j];
            j++;
        }
        while(i<word1.size()){
            answer+=word1[i];
            i++;
        }
        while(j<word2.size()){
            answer+=word2[j];
            j++;
        }
        return answer;

        
    }
};