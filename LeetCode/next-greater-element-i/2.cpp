// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        int j;
        for(int i = 0; i < nums1.size(); i++) {
            bool found = false;
            for(j=0; j<nums2.size(); j++) {

                if(found && nums2[j] > nums1[i]) {
                    output.insert(output.end(), nums2[j]);
                    break;
                }

                if(nums1[i] == nums2[j]) {
                    found = true;
                }
            }
            if(j == nums2.size()) {
                output.insert(output.end(), -1);
            }
        }

        return output;
    }
};