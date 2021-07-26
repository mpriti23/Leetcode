class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n==1){
            return true;
        }
        if(n<3){
            return false;
        }
        if(n==3){
            return true;
        }
        if(double(n)/3 == n/3){
            return isPowerOfThree(n/3);    
        }
        return false;
        
        
    }
};