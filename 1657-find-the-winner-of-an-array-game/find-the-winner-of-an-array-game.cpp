class Solution {
public:
    int getWinner(vector<int>& vec, int k) {
        int i=1,n=vec.size();
        int wincnt=0,element=vec[0];
        while(wincnt!=k&&i<n){
            if(vec[0]<vec[i]){
                    swap(vec[0],vec[i]);
                    wincnt=0;
                    element=vec[0];
            }
            else{
                wincnt++;
                i++;
            }
            
        }
        return element;
        
    }
};