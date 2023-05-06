// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int pd = 0;
        int n = mat.size();
        for(int i=0; i<mat.size(); i++) {
            // Add elements from primary diagonal
            pd += mat[i][i];
            // Add elements from secondary diagonal
            pd += mat[n - 1 - i][i];
        }

        // if n is odd, substract the middle element as it added twice
        if( n % 2 != 0) {
            pd -= mat[n/2][n/2];
        }

        return pd;

    }
};