#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    vector <int> vec(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin() , vec.end());
    int toys = 0;
    int wt = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (wt + vec[i] <= 5000)
        {
            toys++;
            wt += vec[i];
        }
        else break;
    }
    cout << toys;
}