class RandomizedSet {
public:
    unordered_map<int,int> mp;
    int c=0;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // if(find(vec.begin(),vec.end(),val)!=vec.end()){
        //     vec.push_back(val);
        //     return 1;
        // }
        // else
        // return 0;
        if(mp[val]==0){
            mp[val]++;
            c++;
            return 1;
        }
        else return 0;
    }
    
    bool remove(int val) {
        
        // bool flag=false;
        // int n=vec.size();
        // for(int i=0;i<n-1;i++){
        //     if(vec[i]==val){
        //         flag=true;
        //         vec[i]=vec[i+1];
        //     }
        // }
        // if(vec[n-1]==val){
        //     flag=true;
        // }
        // if(flag)
        // {
        //     vec.pop_back();
        //     return 1;
        // }
        // else
        if(mp[val]!=0){
            mp[val]--;
            --c;
            mp.erase(val);
            return 1;
        }
        else
        mp.erase(val);
        return 0;

        
    }
    
    int getRandom() {
        int t=rand(),n=mp.size();
        t=t%c;
        // for(auto it:mp){
        //   if(t==0){
        //     // if(it.second!=0)
        //     return it.first;
        //     // else 
        //     // ++t;
        //   }
        //   --t;
        // }
        auto it=mp.begin();
        while(t){
            it++;
            --t;
        }
            return it->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */