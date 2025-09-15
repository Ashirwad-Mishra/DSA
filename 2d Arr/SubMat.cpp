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
    for (int i = 1 ; i < n - 2 ; i++)
    {
        for (int j = 2 ; j < m - 1 ; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}