// https://leetcode.com/problems/reshape-the-matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c) return mat;

        vector<int> linear;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                linear.insert(linear.end(), mat[i][j]);
            }
        }

        vector<vector<int>> res(r);

        int k=0;
        for(int i=0; i<r; i++) {
            res[i] = vector<int>(c);
            for(int j=0; j<c; j++) {
                res[i][j] = linear[k++];
            }
        }
        return res;
    }
};