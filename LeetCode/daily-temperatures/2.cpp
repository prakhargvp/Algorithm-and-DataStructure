class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         stack<pair<int, int>> st;
         int n = temperatures.size();
         vector<int> res(n);

         for(int i=n - 1; i >= 0; i--) {
             int num = temperatures[i];
             while(!st.empty() && num >= st.top().first) st.pop();
             if(!st.empty())
                res[i] = st.top().second - i;
             else
                res[i] = 0;
             st.push({num, i});
         }

         return res;
    }
};