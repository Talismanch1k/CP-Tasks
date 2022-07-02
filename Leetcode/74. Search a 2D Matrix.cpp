/*
74. Search a 2D Matrix

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
*/
class Solution {
public:
    int binsrch(vector<vector<int>> &matrix, int &i, int &target){
       long long s = 0, e = matrix[0].size()-1;
       long long mid;
       while(s<=e){
           mid = (s+e)/2;
           if(matrix[i][mid] == target) return true;
           if(target < matrix[i][mid]) e = mid-1;
           else s = mid+1;
       }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int i = 1;
        while(matrix[i][c-1]<target && i<r-1){
            ++i; 
        }
        return binsrch(matrix, i, target);
    }
};
