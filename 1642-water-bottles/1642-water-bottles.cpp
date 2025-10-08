class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int a=numBottles;
        int b=numBottles;
        while(b>=numExchange)
        {
            int x=b/numExchange;
            b=b-numExchange*x;
            a+=x;
            b+=x;
        }
        return a;
    }
};