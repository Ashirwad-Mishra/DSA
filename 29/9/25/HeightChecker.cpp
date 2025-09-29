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
    int ans = 0;
    vector <int> nums = vec;
    sort(nums.begin()  , nums.end());
    for (int i = 0 ; i < vec.size() ; i++)
    {
        if (vec[i] != nums[i]) ans++;
    }
    cout << ans;
}