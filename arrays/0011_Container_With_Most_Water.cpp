class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int left=0;
        int right=n;
        int maxArea = 0;
        while(left<right){
            int currentheight=min(height[left],height[right]);
            int width=right-left;
            int currentarea=currentheight*width;
            maxArea=max(maxArea,currentarea);
            if (height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return maxArea;
        
    }
};