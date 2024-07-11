class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int filled=numBottles, empty=0;
        while(filled>0){
            empty=empty+filled;
            filled=empty/numExchange;
            empty=empty%numExchange;
            numBottles+=filled;
        }
        return numBottles;
    }
};