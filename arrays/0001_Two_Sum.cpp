// Problem: 1. Two Sum
// Difficulty: Easy
// Topic: Arrays, Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numindex;
        for (int i=0;i<=nums.size()-1;i++){
            int needed=target-nums[i];
            if (numindex.find(needed)!=numindex.end()){
                return {numindex[needed],i};
            }
            numindex[nums[i]] = i;
        }
        return {};        
    }
};