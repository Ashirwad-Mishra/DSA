#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout << "\nEnter n: ";
    cin >> n;

    vector <int> vec(n);
    for (int i = 0 ; i < n ; i++) cin >> vec[i];

    for (int i = 0 ; i < n ; i++)
    {
        int t = vec[i];
        for (int j = i + 1 ; j < n ; j++)
        {
            t = max(t , vec[j]);
        }
        if (t == vec[i]) cout << 0 << " ";
        else cout << t << " ";
    }
}