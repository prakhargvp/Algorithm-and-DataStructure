// https://leetcode.com/problems/verifying-an-alien-dictionary


class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int ch[26];
        for(int i=0; i<order.size(); i++) {
            ch[order[i] - 'a'] = i;
        }
        
        for(int i=0; i<words.size() - 1; i++) {
            for(int k = 0; k < words[i].size(); k++) {
                // When we don't have mismatch and we need to check "apple","app"
                if (k >= words[i + 1].size()) return false;

                int leftCharPos = ch[words[i].at(k) - 'a'];
                int rightCharPos = ch[words[i+1].at(k) - 'a'];

                if(leftCharPos > rightCharPos) return false;
                else if(leftCharPos < rightCharPos) break;
            }
        }

        return true;
    }
};