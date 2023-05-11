// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flagAsc = true, flagDesc = true;
        for(int i=0; i < nums.size() - 1; i++) {
            // Ascending Order Check
            if(nums[i] > nums[i+1]) { flagAsc = false; }
            // Descending Order Check
            if(nums[i] < nums[i+1]) { flagDesc = false; }

            if(flagAsc == false && flagDesc == false) return false;
        }
        return flagAsc || flagDesc;
    }
};