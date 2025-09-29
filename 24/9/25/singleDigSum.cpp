#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    string str = to_string(n);
    while (--k)
    {
        str += to_string(n);
    }

    while(str.length() > 1)
    {
        int ans = 0;
        for (auto i : str)
        {
            ans += (i - '0');
        }
        str = to_string(ans);
    }

    cout << endl << str;
}