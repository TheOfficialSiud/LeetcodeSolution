class Solution {
public:

// bool checkpermutation(string s,string t){
//     do{
//         if(s==t)

//     }
// }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
        return false;
        int win=s1.length();
        vector<int> fir(26,0);
        for(int i=0;i<win;i++){
            fir[int(s1[i])-97]++;
            // cout<<97-int(s1[i])<<" ";
        }
       
        for(int i=0;i<=s2.length()-win;i++){
            vector<int> sec(26,0);
           // string t=""
            for(int j=i;j<i+win;j++){
            sec[int(s2[j])-97]++;
            //t+=s[j];
        
        }
        for(int i=0; i<sec.size();i++)
        cout<<sec[i]<<" ";
        cout<<endl;
        if(fir==sec){
        //if(checkpermutation(s1,t))
        return true;
       }
        }

        return false;
    }
};