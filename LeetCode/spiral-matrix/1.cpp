// https://leetcode.com/problems/spiral-matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;
        int rows = matrix.size();
        int columns = matrix[0].size();
        int up = 0;
        int left = 0;
        int right = columns - 1;
        int down = rows - 1;

        while(res.size() < rows * columns) {

            // left to right
            for(int col = left; col <= right; col++) {
                res.insert(res.end(), matrix[up][col]);
            }
            // top to bottom
            for(int row = up + 1; row <= down; row++) {
                res.insert(res.end(), matrix[row][right]);
            }

            if(up!=down) {
                // right to left
                for(int col = right - 1; col >= left; col--) {
                    res.insert(res.end(), matrix[down][col]);
                }
            }

            if (left != right) {
                // bottom to top
                for(int row = down - 1; row > up; row--) {
                    res.insert(res.end(), matrix[row][left]);
                }
            }
            
            left++; right--; up++; down--;
        }

        return res;
    }
};