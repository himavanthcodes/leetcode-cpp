class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstmax=LLONG_MIN;
        long long secondmax=LLONG_MIN;
        long long thirdmax=LLONG_MIN;
        for (int num:nums){
            if (num==firstmax ||num==secondmax || num==thirdmax  ){
                continue;
            }
            if (num>firstmax){
                thirdmax=secondmax;
                secondmax=firstmax;
                firstmax=num;
            }else if (num>secondmax){
                thirdmax=secondmax;
                secondmax=num;
            }
            else if (num>thirdmax){
                thirdmax=num;
            }

        }
        if (thirdmax==LLONG_MIN){
            return firstmax;
        }
        return thirdmax;

    }
};