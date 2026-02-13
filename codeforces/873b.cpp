#include<bits/stdc++.h>
using namespace std;

int solve(string &str , int n)
{
    vector <int> prefix(n);
    if (str[0] == '1') prefix[0] = 1;
    else prefix[0] = -1;

    for (int i = 1 ; i < n ; i++)
    {
        if (str[i] == '1')
        {
            prefix[i] = prefix[i-1] + 1;
        }
        else prefix[i] = prefix[i-1] - 1;
    }

    unordered_map<int , int> mp;
    for (int i = 0 ; i < n ; i ++)
    {
        if(mp.find(prefix[i]) == mp.end()) mp[prefix[i]] = i;
    }
    int ans = 0;
    for (int i = n - 1 ; i >=  0 ; i--)
    {
        if (prefix[i] == 0) ans = max(ans , i + 1);
        else 
        {
            if (mp.find(prefix[i]) != mp.end())
            {
                ans = max(ans , i - mp[prefix[i]]);
            }
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    cout << solve(str , n);
}