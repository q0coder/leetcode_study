#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int max_profit = 0;
    int min_prices = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        max_profit = max(max_profit, prices[i] - min_prices);
        min_prices = min(min_prices, prices[i]);
    }
    return max_profit;
}

//int maxProfit(vector<int>& prices) {
//    int max = 0;
//    for (int i = 0; i < prices.size() - 1; i++)
//    {
//        for (int j = i + 1; j < prices.size(); j++)
//        {
//            if (max < prices[j] - prices[i])
//            {
//                max = prices[j] - prices[i];
//            }
//        }
//    }
//    return max;
//}
int main()
{
	vector<int>vec{ 11,7,2,4,1 };
	cout << maxProfit(vec) << endl;
}