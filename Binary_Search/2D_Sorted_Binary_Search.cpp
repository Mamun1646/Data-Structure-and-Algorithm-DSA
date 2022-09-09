class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //we will start searching top row right corner.
        
        int column=matrix[0].size();
        int row=matrix.size();
        int start =0;
        int end=column-1;
        while(1){
            // Target find so succefful
            if(matrix[start][end]==target)
                return true;
                // target not find and target is smaller then we will go for back  collumn
            else if(matrix[start][end]>target)
                --end;
                // // target not find and target is larger then we will go for forward  row
            else if(matrix[start][end]<target)
                start++;
            if(start<0||start>=row)
                return false;
             if(end<0 || end>=column)
                return false;
            
        }
        
        
    }
};