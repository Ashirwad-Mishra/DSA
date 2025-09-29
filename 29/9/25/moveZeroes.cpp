#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> vec(n);

    for (int i = 0 ; i < n ; i++)
    {
        cin >> vec[i];
    }

    int z = -1;
    int m = -1;
    vector <int> ans;
    int c = 0;
    for (int i : vec)
    {
        if (i) ans.push_back(i);
        else c++;
    }
    while(c--)
    {
        ans.push_back(0);
    }
    for (auto i : ans)
    {
        cout << i << "  ";
    }
}