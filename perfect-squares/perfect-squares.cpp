class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,9999);
        if(n>=0)
        dp[0]=0;
        if(n>=1)
        dp[1]=1;
        if(n>=2)
        dp[2]=2;
        if(n>=3)
        dp[3]=3;
        for(int i=1;(i*i)<=n;i++){
            for(int j=0;((i*i)+j)<=n;j++){
                dp[(i*i)+j]=min(dp[(i*i)+j],
                             1+dp[j]);
            }
        }
        return dp[n];
    }
};