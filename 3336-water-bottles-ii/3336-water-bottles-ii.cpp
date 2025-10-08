class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
       int a=numBottles;
       int b=numBottles;
       while(b>=numExchange)
       {
            b=b-numExchange;
            a++; b++;
            numExchange++;
       }
       return a;
    }
};