#include <bits/stdc++.h>
using namespace std;

/*map <char , int> */ string reduceToFreq(string str)
{
    map <char , int> mp;
    for (auto c : str) mp[c]++;
    string ans = "";
    for (auto [x,y] : mp)
    {
        ans += x;
        ans += y + '0';
    }
    return ans;
    // return mp;
}

int main()
{
    string str;
    getline(cin , str);
    println("{}",reduceToFreq(str));
}