class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int i=0,j=0;
        int c=1;
        int n=arr.size();
        while(i<n){
            j=i+1;
            while(j<n&&arr[j]==arr[i]){
                c++;
                j++;
            }
            if(c>((n*25)/100))
            return arr[i];
            else
            {
                i=j;
                c=1;
            }
        }
        return -1;
    }
};