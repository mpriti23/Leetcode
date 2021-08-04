/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int l = 1;
        long long r = n;
        while (l < r) {
            long long num =  (r+l)/2;
            if (guess(num) == 0) return num;
            if (guess(num) == 1) {
                l = num + 1;
            } else {
                r = num - 1;
            }
        }
        
        return (int)l;

    }
};