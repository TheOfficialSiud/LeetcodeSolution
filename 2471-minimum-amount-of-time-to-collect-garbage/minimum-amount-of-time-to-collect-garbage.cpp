class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time=0,n=garbage.size(),g=-1,p=-1,m=-1;

        for(int i=n-1;i>=0;i--){
            if(g==-1&&garbage[i].find('G')!=string::npos){
                g=i;
            }
            if(p==-1&garbage[i].find('P')!=string::npos){
                p=i;
            }
            if(m==-1&&garbage[i].find('M')!=string::npos){
                m=i;
            }
            if(g!=-1&&p!=-1&&m!=-1)
            break;
        }

        cout<<g<<" "<<p<<" "<<m;

        // // map<pair<int,char>,int> mp;
        //for Glass
        int travelcost=0;

        for(int i=0;i<=g&&g!=-1;i++){
                if(i!=0){
                    travelcost=travel[i-1];
                }
                int c=0;
                for(int j=0;j<garbage[i].length();j++){
                    if(garbage[i][j]=='G')
                    c++;
                }
                time=time+travelcost+c;
        }

        //for paper
        travelcost=0;

        for(int i=0;i<=p&&p!=-1;i++){
                if(i!=0){
                    travelcost=travel[i-1];
                }
                int c=0;
                for(int j=0;j<garbage[i].length();j++){
                    if(garbage[i][j]=='P')
                    c++;
                }
                time=time+travelcost+c;
        }


        //for metal
        travelcost=0;

        for(int i=0;i<=m&&m!=-1;i++){
                if(i!=0){
                    travelcost=travel[i-1];
                }
                int c=0;
                for(int j=0;j<garbage[i].length();j++){
                    if(garbage[i][j]=='M')
                    c++;
                }
                time=time+travelcost+c;
        }


        return time;

    }
};