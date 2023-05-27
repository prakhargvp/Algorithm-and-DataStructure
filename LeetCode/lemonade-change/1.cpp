// https://leetcode.com/problems/lemonade-change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for(int i=0; i<bills.size(); i++) {
            if(bills[i] == 5) five++;
            else if(bills[i] == 10 && five > 0) { ten++; five--;}
            else if(bills[i] == 20 && ten > 0 && five > 0 ) { twenty++; ten--; five--;}
            else if(bills[i] == 20 && five > 2 ) { twenty++; five-=3;}
            else return false;
        }

        return true;
    }
};