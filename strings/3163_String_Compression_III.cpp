class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int n=word.size();
        int i=0;
        while(i<n){
            char currentchar=word[i];
            int count=0;
            int j=i;
            
            while(j<n && word[j]==currentchar && count<9){
                count++;
                j++;
            }
            ans+=to_string(count);
            ans+=currentchar;
            i=j;
        }
        return ans;
        
    }
};