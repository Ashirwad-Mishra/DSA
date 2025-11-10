#include <bits/stdc++.h>
using namespace std;

bool solve(vector <int> &v , int t)
{
    ranges::sort(v);
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] + v[j] == t)
        {
            return true;
        }
        if (v[i] + v[j] > t) j--;
        else i++;
    }
    return false;
}

int main()
{
    int n , t;
    cin >> n >> t;
    vector <int> v(n);
    for (auto &i : v) cin >> i ;
    cout << solve(v , t); 
}