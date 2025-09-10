#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector<int> vec(n);
    for (int i = 0 ; i < n ; i++) cin >> vec[i];

    int ans = INT_MIN;
    for (int i = 0 ; i < n ; i++)
    {
        int tempSum = 0;
        for (int j = i ; j < n ; j++)
        {
            tempSum += vec[j];
            ans = max(ans,tempSum);
        }
    }
    cout << "\nMax sum: " << ans;
}