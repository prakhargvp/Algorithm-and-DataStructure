// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(), coordinates.end());
        int i = 0;
        int dy = coordinates[i+1][1] - coordinates[i][1];
        int dx = coordinates[i+1][0] - coordinates[i][0];

        for(i=2; i < coordinates.size(); i++) {
            int dy_nxt = coordinates[i][1] - coordinates[i-1][1];
            int dx_nxt = coordinates[i][0] - coordinates[i-1][0];
            if(dy*dx_nxt != dx*dy_nxt) return false;
        }
        return true;
    }
};