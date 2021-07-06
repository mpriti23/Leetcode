class Solution {
public:
    bool canJump(vector<int>& nums) {
       int last=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=last){
                last=i;
            }
        }
        return last==0;
    }
};

// vector<int>dp(n,0);
        // dp[0]=1;
        // for(int i=0;i<n-1;i++){
        //     if(dp[i]){
        //         for(int j=i+1;j<=(i+nums[i]);j++){
        //             if(j<n)
        //              dp[j]=1;
        //         }
        //         if(dp[n-1]==1){
        //             return true;
        //         }
        //     }
        // }
        // if(dp[n-1]==0){
        //     return false;
        // }
        // return true;