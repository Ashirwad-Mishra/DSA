#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout << "\nEnter n and m: ";
    cin >> n >> m;

    vector<vector<int>>mat(n , vector<int>(m));
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j <m ; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << endl;
    for (auto v : mat)
    {
        int sum = 0;
        int m = INT_MAX;
        int M = INT_MIN;
        for (int i : v)
        {
            sum += i;
            m = min(m , i);
            M = max(M , i);
        }
        cout << sum << "  " << M << "  " << m << endl;
    }
}