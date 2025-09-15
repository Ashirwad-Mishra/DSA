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
    int k;
    cout << "\nEnter k: ";
    cin >> k;
    cout << endl;

    for (int i = 0 , j = n - 1 ; i < j ; i++ , j--)
    {
        int a = m - k + 1;
        cout << a;
        for (int b = 0 ; b < k ; b++ , a--)
        {
            
        }
    }

    cout << "\nNew mat: \n";
    for (auto v : mat)
    {
        for (int i : v)
        {
            cout << i << "  ";
        }
        cout << endl;
    }
}