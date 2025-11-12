#include <bits/stdc++.h>
using namespace std;

bool check(vector <int> &vec , int idx , int currSum)
{
    if (idx == (int)vec.size()) return currSum && currSum % 3 == 0;
    return check(vec , idx + 1 , currSum) || check(vec , idx + 1 , currSum + vec[idx]);
}

int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    for (auto &i : vec) cin >> i;
    cout << check(vec , 0 , 0);
} 