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

    unordered_map <int , int> mp;
    for (auto i : vec) mp[i]++;

    int maj = INT_MIN;
    for (auto [x,y] : mp)
    {
        if (y >n/2) 
        {
            maj = x;
            break;
        }
    }

    if (maj != INT_MIN) 
    {
        cout << maj;
    }
    else cout << "\nNo Majority Element!!!!!";
}