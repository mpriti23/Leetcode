class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int n=pairs.size();
        int lis[n];
        for(int i=0;i<n;i++){
            lis[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(pairs[i][0]>pairs[j][1] && lis[i]<=lis[j] ){
                    lis[i]=1+lis[j];
                }
            }
            // cout<<pairs[i][0]<<pairs[i][1]<<" ";
        }
        return lis[n-1];
    }
};