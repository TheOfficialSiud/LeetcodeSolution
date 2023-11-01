class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> temp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++)
            temp.push_back(matrix[i][j]);
        }

       int start=0,end=temp.size()-1;
       while(start<=end)
       {
           int mid=(start+end)/2;
           if(temp[mid]==target)
           return true;
           else if(temp[mid]<target)
           start=mid+1;
           else
           end=mid-1;
       } 

       return false;
    }
};