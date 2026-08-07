class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int currentsum=0;
        int minlength=INT_MAX;
        for (int right=0;right<=nums.size()-1;right++){
            currentsum+=nums[right];
            while (currentsum>=target){
                minlength = min(minlength, right - left + 1);
                currentsum-=nums[left];
                left++;
            }
        }
        if (minlength == INT_MAX){
            return 0;
        }
        return minlength;
    
        
    }
};