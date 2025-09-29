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
    vector <int> ans;
    for (int i = 0 , j = vec.size() - 1 ; i <= j ; i++ , j--)
    {
        ans.push_back(vec[i]);
        if (ans.size() < vec.size()) ans.push_back(vec[j]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}