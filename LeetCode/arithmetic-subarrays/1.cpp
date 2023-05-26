// https://leetcode.com/problems/arithmetic-subarrays

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i=0; i<l.size(); i++) {
            vector<int> temp(nums.begin() + l[i], nums.begin()  + r[i] + 1);
            sort(temp.begin(), temp.end());

            int diff = 0, isAP = true;
            for(int j=0; j<temp.size() - 1; j++) {
                if(j == 0) {
                    diff = temp[j] - temp[j+1];
                } else if(temp[j] - temp[j+1] != diff) { 
                    isAP = false; break; 
                }
            }
            
            res.push_back(isAP);
        }
        return res;
    }
};