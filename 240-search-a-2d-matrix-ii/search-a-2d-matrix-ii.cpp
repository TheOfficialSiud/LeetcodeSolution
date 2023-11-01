class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size();
        --col;


      while(col>=0&&row<matrix.size()){
          int temp=matrix[row][col];
          if(temp==target)
          return 1;
          else if(temp<target)
          row++;
          else
          col--;
      }
      return false;
    }
};