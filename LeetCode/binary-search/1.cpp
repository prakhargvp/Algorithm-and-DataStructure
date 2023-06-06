// Approach-1: Iterative
// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0, right = size - 1;
        while(left <= right) {
            int mid = (right - left / 2);
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};