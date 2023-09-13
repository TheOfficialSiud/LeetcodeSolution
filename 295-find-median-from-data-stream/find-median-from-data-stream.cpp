class MedianFinder {
    multiset<int> st;
    // int i=1;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        st.insert(num);
        // i++;
    }
    
    double findMedian() {
        // int i=(st.size());
        // if(i%2==0){
        //     i=i/2;
        //     --i;
        //     cout<<*st.begin()+(i+1);
        // return double (((*st.begin()+i)+(*st.begin()+i-1))/2);
        // }
        // i=i/2;
        // return double (((*st.begin()+i-1))/2);
        int j=st.size()/2;
        auto it=st.begin();
        double temp;
      
        if(st.size()%2==0)
        {
            
              --j;
               
            advance(it,j);
                temp=*it;
                cout<<*it;
                 advance(it,1);
                // ++it;
                
                temp+=*it;
                // cout<<temp;
                return temp/2;
        }
        
        else{
            // ++j;
            advance(it,j);
        return *it;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */