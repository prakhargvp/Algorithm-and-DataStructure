// https://leetcode.com/problems/largest-perimeter-triangle

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater <>());
        int maxPerimeter = 0;
        for(int i=0; i<nums.size() - 2; i++) {
            if(nums[i] < nums[i+1] + nums[i+2]) {
                int tmpMaxPerimeter = nums[i] + nums[i + 1] + nums[i + 2];
                if(maxPerimeter < tmpMaxPerimeter) maxPerimeter = tmpMaxPerimeter;
            }
        }
        return maxPerimeter;
    }
};