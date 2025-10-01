class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptybottle=0,ans=numBottles;

        while(numBottles){
            // emptybottle= emptybottle+ (numBottles%numExchange);
            // numBottles= numBottles/numExchange;
            // if(emptybottle>=numExchange){
            //     emptybottle= emptybottle%numExchange
            // }

            emptybottle=numBottles+emptybottle;
            numBottles= emptybottle/numExchange;
            ans+=numBottles;
            emptybottle=emptybottle%numExchange;

        }

        return ans;
    }
};