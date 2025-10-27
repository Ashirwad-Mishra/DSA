#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
void func(int n, int v[])
{
    unordered_set<int> seen;

    for (int i = 0; i < n; i++)
    {
        if (seen.find(v[i]) != seen.end())
        {
            cout << 1 << endl;
            cout << v[i] << endl;
            return;
        }
        seen.insert(v[i]);
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int v[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        func(n, v);
    }

    return 0;
}
