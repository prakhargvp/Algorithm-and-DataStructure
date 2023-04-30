// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution {
public:
    double average(vector<int>& salary) {
       double totalSalary = 0;
       int minSalary = INT_MAX, maxSalary = INT_MIN;
       for(int i=0; i < salary.size(); i++) {
           totalSalary += salary[i];
           if(salary[i] < minSalary) minSalary = salary[i];
           if(salary[i] > maxSalary) maxSalary = salary[i];
       }
       totalSalary = totalSalary - ( minSalary + maxSalary );
       return totalSalary / ( salary.size() - 2);
    }
};