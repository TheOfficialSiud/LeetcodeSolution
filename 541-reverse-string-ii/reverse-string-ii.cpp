class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int n=s.length();
        int r=n;

        while(r!=0){
            int start, end;
            if(r<k){
                start=i,end=i+r-1;
                r=r-r;
            }
            else if(r<2*k){
                start=i,end=i+k-1;
                r=r-r;
            }
            else{
                start=i,end=i+k-1;
                i=i+2*k;
                r=r-2*k;
            }

            while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }

        }

        return s;
        
    }
};