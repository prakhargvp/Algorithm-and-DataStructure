class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k = 0;
        while(k < 4) {
            // transpose a matrix
            for(int i=0; i < mat.size(); i++) {
                for(int j=0; j < i; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            // reverse a matrix
            for(int i=0; i < mat.size(); i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
            if(mat == target) return true;
            k++;
        }
        return false;
    }
};