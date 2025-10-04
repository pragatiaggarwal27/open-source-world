class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int cnt=0;
        cnt=numBottles;
        while(numBottles>=numExchange){
            int emp=numBottles-numExchange;
            cnt++;
            numBottles=emp;
            numBottles++;
            numExchange++;
        }
        return cnt;
    }
};
