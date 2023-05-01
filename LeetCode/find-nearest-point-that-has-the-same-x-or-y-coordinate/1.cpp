// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = -1;
        int smallDistance = INT_MAX;
        for(int i=0; i<points.size(); i++) {
            if(points[i][0] == x || points[i][1] == y) {
                int distance = abs(points[i][0] - x) + abs(points[i][1] - y);
                if(distance < smallDistance) {
                    smallDistance = distance;
                    index = i;
                }
            }
        }

        return index;
    }
};