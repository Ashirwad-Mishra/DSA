#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*int n;
    cin >> n;
    unordered_map <int , int> mp;
    for (int i = 1 ; i <= n ; i++) 
    {
        int t;
        cin >> t;
        mp[t] = t*t;
    }
    println("{}" , mp);
    cout << mp.find(n);*/
    unordered_set<int> s = {7 , 2,3 ,4 ,5};
    // cout << *s.find(5);
    auto x = s.find(5); 
    cout << x - s.begin() << endl;
}