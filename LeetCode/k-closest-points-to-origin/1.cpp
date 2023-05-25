// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        set<pair<int, int>> s;
        vector<vector<int>> res;

        for(int i=0; i<points.size(); i++) {
            int x = pow(points[i][0], 2) + pow(points[i][1], 2);
            s.insert({x, i});
        }
        
        for (auto it : s) {
            if(!k--) break;
            res.insert(res.end(), points[it.second]);
            
        }
        return res;
    }
};