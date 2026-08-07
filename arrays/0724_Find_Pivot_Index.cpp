class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector <int> prefix(n);
        prefix[0]=nums[0];
        for (int i=1;i<=n-1;i++){
            prefix[i]=prefix[i-1]+nums[i];
            
        }
        for (int j=0;j<=n-1;j++){
            int left;
            if (j==0) {
                left=0;
            }else {
                left=prefix[j-1];
            }
            
            int right=prefix[n-1]-left-nums[j];
            if (left==right){
                return j;
            
            }
                
            
            
        }
        return -1;
        
    }
};