class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>x({a,b,c});
        vector<int>res;
        sort(x.begin(),x.end());
        
        if(x[0]==(x[1]-1) && x[1]==(x[2]-1)){
            res.push_back(0);
        }else if(x[1]-x[0]>2 && x[2]-x[1]>2){
            res.push_back(2);
        }else{
            res.push_back(1);
        }
        
        res.push_back(x[2]-x[0]-2);
        
        
        
        return res;
    }
};