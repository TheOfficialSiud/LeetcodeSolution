class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int row= matrix.size();
      int col= matrix[0].size();
      int total= row*col;
      int count =0;

      int startrow=0;
      int startcol=0;
      int endrow= row-1;
      int endcol= col-1;

      vector<int> res;

        while(count<total){

            for(int i=startrow;count<total&&i<=endcol;i++){
                res.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            for(int j=startrow;count<total&&j<=endrow;j++){
                res.push_back(matrix[j][endcol]);
                count++;
            }
            endcol--;

            for(int i=endcol;count<total&&i>=startcol;i--){
                res.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            for(int j=endrow;count<total&&j>=startrow;j--){
                res.push_back(matrix[j][startcol]);
                count++;
            }
            startcol++;

        }

        return res;

    }
};