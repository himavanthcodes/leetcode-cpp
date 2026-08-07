class Solution {
public:
    int subarraySum(vector<int>& nums, int k){
        unordered_map<int,int>prefixcount;
        int count=0;
        int prefixsum=0;
        prefixcount[0]=1;
        for (int num:nums){
            prefixsum+=num;
            if (prefixcount.find(prefixsum-k)!=prefixcount.end()){
                count += prefixcount[prefixsum - k];
            }
            prefixcount[prefixsum]++;
        }
        return count;
        
    
        
    }
};