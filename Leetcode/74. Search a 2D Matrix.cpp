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
        while(matrix[i][c-1]<target && i<r-1){ // here may ne need equal
            ++i; 
        }
        return binsrch(matrix, i, target);
    }
};
