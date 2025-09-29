#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> vecA, vecB;
    for (int i = 0 ; i < m ; i++)
    {
        int t;
        cin >> t;
        vecA.push_back(t);
    }

    for (int i = 0 ; i < m ; i++)
    {
        int t;
        cin >> t;
        vecA.push_back(t);
    }
    
    vector <int> vec(vecA.begin() , vecA.end());
    for (int i : vecB)
    {
        vec.push_back(i);
    }
    sort(vec.begin() , vec.end());
    cout << vec[m-1] + vec[m];
}