// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int ch[26];
        for(int i=0; i<order.size(); i++) {
            ch[order[i] - 'a'] = i;
        }

        int k = 0;
        bool flag = true;
        for(int i=0; i<words.size() - 1; i++) {
            int k = 0;
            bool same = false;
            while(k < min(words[i].size(),  words[i+1].size())) {
                int leftCharPos = ch[words[i].at(k) - 'a'];
                int rightCharPos = ch[words[i+1].at(k) - 'a'];
                same = false;
                if(leftCharPos > rightCharPos) return false;
                else if(leftCharPos < rightCharPos) { break; }
                else if (words[i].size() > words[i+1].size()) same = true;
                k++;
            }
            if(same) flag = false;
        }

        return flag;
    }
};