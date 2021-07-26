class Solution {
public:
    int maxArea(vector<int>& height) {
        // Brute Force:
        // int n=height.size();
        // int mxval=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int x=min(height[i],height[j])*(j-i);
        //         mxval=max(mxval,x);
        //     }
        // }
        // return mxval;
        
        int i=0,j=height.size()-1;
        
        int mxval=0;
        while(i<j){
            int l=min(height[i],height[j]);
            int b=j-i;
            mxval=max(mxval,l*b);
            
            if(height[i]>=height[j]){
                j--;
            }else{
                i++;
            }
        }
        return mxval;
    }
};