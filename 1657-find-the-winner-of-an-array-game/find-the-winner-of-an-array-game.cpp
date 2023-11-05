class Solution {
public:
    // void rotate(vector<int> &vec){
    //     int temp=vec[1];

    //     for(int i=2;i<vec.size();i++){
    //         vec[i-1]=vec[i];
    //     }
    //     vec[vec.size()-1]=temp;
        
    // }
    int getWinner(vector<int>& vec, int k) {
        // int wincount=0,winning=0;
        // int n=arr.size();
        // int ans,maxi=arr[0];
        // for(int i=0;i<n;i++){
        //         // maxi=
        //     int j=i-1;
        //     int large=0;
        //     while(j>=0){
        //         if(arr[i]>arr[j]){
        //             large++;
        //         }
        //         else
        //         break;
        //         j--;
        //     }
        //     j=i+1;
        //     while(j<n){
        //         if(arr[i]>arr[j]){
        //             large++;
        //         }
        //         else
        //         break;
        //         j++;
        //     }
        //     int win=large-winning;
        //     if(win>0)
        //     winning++;
        //     if(win>=k)
        //     return arr[i];
        //     else if(win>=wincount){
        //         wincount=win;
        //         ans=arr[i];
        //         cout<<wincount<<" "<<arr[i]<<endl;
        //     }

        // }
        // return ans;
        // if(k>=vec.size())
        // return *max_element(vec.begin(),vec.end());
        int maxi=vec[0];
        int i=1,n=vec.size();
        int wincnt=0,element=vec[0];
        while(wincnt!=k&&i<n){
            if(vec[0]<vec[i]){
                    swap(vec[0],vec[i]);
                    wincnt=0;
                    element=vec[0];
                    maxi=vec[0];
            }
            else{
                wincnt++;
                // int tmp=vec[1];
                // vec.erase(vec.begin()+1);
                // vec.push_back(tmp);
                i++;
            }
            
        }
        return element;
        
    }
};