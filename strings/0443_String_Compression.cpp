class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int read=0;
        int write=0;
        while (read<n){
            char currentchar=chars[read];
            int count=0;
            while (read<n && chars[read]==currentchar){
                read++;
                count++;
            }
            chars[write]=currentchar;
            write++;
            if (count>1){
                string freq=to_string(count);
                for (char ch:freq){
                    chars[write]=ch;
                    write++;
                }
            }


        }
        return write;
        
    }
};