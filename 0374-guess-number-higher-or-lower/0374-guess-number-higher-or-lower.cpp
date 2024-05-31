/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        while(guess(n)!=0){
            if(guess(n)==-1){
                n=n/2;
            }
            else{
                n=n+n/2;
            }
        }
        return n;
    }
};