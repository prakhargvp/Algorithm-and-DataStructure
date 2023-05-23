class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        int k = 0;
        bool flag;
        while(k < 4) {
            flag = true;
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

            for(int i=0; i < mat.size(); i++) {
                for(int j=0; j < mat[i].size(); j++) {
                    if(mat[i][j] != target[i][j]) {
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag) return true;
            k++;
        }
        return flag;
    }
};