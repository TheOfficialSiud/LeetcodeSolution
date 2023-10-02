class Solution {
public:

    bool winnerOfGame(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     int a=0,b=0;
    size_t found1=0,found2=0;
    while(1){
        if(found1==0)
        found1 = s.find("AAA");
        else
         found1 = s.find("AAA",found1-1);
         if(found1 ==string::npos){
             break;
         }
         else{
             s.erase(found1+1,1);
             a++;
         }
        if(found2==0)
        found2 = s.find("BBB");
        else
         found2 = s.find("BBB",found2-1);
         if(found2 ==string::npos){
             break;
         }
         else{
             s.erase(found2+1,1);
             b++;
         }
    }
    return (a>b);
    }
};