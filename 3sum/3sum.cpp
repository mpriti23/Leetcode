class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // -4,-1,-1,0,1,2
        set<vector<int>>res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int x=nums[i]+nums[j]+nums[k];
                if(x==0){
                     res.insert({nums[i],nums[j],nums[k]});
                    j++;
                }else if(x<0){
                    j++;
                }else if(x>0){
                    k--;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto vec:res){
            ans.push_back(*(res.begin()));
            res.erase(res.begin());
        }
        return ans;
    }
};