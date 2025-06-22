class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if (matrix.empty()) return {};
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size(); //kisi bhi row ka size.
        int startingRow = 0; 
        int endCol = col - 1;
        int endRow = row - 1;
        int startingCol = 0;
        int count = 0;
        int total = row*col; // total number of elements.

        while(count < total){

            //For Starting row.
            for(int index = startingCol; index <= endCol && count < total; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //For Ending column.
            for(int index = startingRow; index <= endRow  && count < total; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //For Ending row.
            for(int index = endCol; index >= startingCol && count < total; index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            //For Starting column.
            for(int index = endRow; index >= startingRow && count < total; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};