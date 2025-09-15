#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <vector<int>>vec = {{12,4,7},{1,5,8},{2,42,8}};
    vec[1].insert(vec[1].begin() + 2 , 67);
    for (auto v : vec)
    {
        for (auto i : v) cout << i << " ";
        cout << endl;
    }
}