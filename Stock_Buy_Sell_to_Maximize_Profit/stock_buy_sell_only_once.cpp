#include<bits/stdc++.h>
using namespace std;

double maxProfit(vector<double> price) {
	
	double maxProfit, minPrice, diff_buy_sell;	
	minPrice = numeric_limits<double>::max();
	maxProfit = numeric_limits<double>::min();

	for(int i=1; i<price.size(); i++) {
		minPrice  = min(minPrice, price[i-1]);
		diff_buy_sell = price[i] - minPrice;
		maxProfit = max(maxProfit, diff_buy_sell);
	}	
	return maxProfit;
}

int main() {

	vector<double> price = {100, 180, 260, 310, 40, 535, 695};

	cout << "Maximum Profit: " << maxProfit(price) << endl;

return 0;
}
