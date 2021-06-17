class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int c=0;
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int i=0,j=0;
        while(i<n && j<m){
            if(g[i]<=s[j]){
                c++;
                i++;
                j++;
            }
            else if(g[i]>s[j]){
                i++;
            }
        }
        return c;
    }
};