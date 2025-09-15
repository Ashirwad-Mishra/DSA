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

    for (int i = 0 ; i < n - 1 ; i++)
    {
        for (int j = 0 ; j < m - 1 ; j++)
        {
            mat[i][j] = mat[i][j] ^ mat[i + 1][j+1];
            mat[i+1][j+1] = mat[i][j] ^ mat[i + 1][j+1];
            mat[i][j] = mat[i][j] ^ mat[i + 1][j+1];
        }
    }

    for (auto v : mat)
    {
        for (int i : v)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
}