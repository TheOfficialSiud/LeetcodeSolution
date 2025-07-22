class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int n=s.length();
        int r=n;

        while(r!=0&&i<n){
            if(r<k){
                int start=i,end=i+r-1;
                 while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                r=r-r;

            }
            else if(r<2*k){
                 int start=i,end=i+k-1;
                 while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                r=r-r;
            }
            else{
                int start=i,end=i+k-1;
                while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                i=i+2*k;
                r=r-2*k;
            }

            cout<<s<<endl;

        }

        return s;
        
    }
};