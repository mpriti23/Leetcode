class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,0);
        dp[0]=0;
        int n=nums.size();
        dp[1]=nums[0];
        for(int i=2;i<n+1;i++){
            dp[i]=max(nums[i-1]+dp[i-2],dp[i-1]);
            
        }
        return dp[n];
    }
};