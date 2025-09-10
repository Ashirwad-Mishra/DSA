#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector <int> vec(n);
    for (int i = 0 ; i < n ; i++) cin >> vec[i];

    int maxProfit = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            maxProfit = max(maxProfit , vec[j] - vec[i]);
        }
    }

    cout << "\nThe maximum profit: " << maxProfit;
}