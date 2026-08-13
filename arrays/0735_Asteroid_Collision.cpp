class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>stk;
        for (int i=0;i<n;i++){
            if (asteroids[i]>0){
                stk.push(asteroids[i]);
            }
            else{
                // negative number is big
                while(!stk.empty() && stk.top()>0 && stk.top()+asteroids[i]<0){
                    stk.pop();
                }
                //same direction
                if (stk.empty() || stk.top()<0){
                    stk.push(asteroids[i]);
                }
                //same size
                else if(stk.top()+asteroids[i]==0){
                    stk.pop();
                }
            }
        }
        vector<int>ans(stk.size());
        int i=stk.size()-1;
        while (!stk.empty()){
            ans[i]=stk.top();
            stk.pop();
            i--;
        }
        return ans;
    }
};