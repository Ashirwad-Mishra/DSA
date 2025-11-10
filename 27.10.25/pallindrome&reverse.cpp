#include <bits/stdc++.h>
using namespace std;

bool isPallind(string &str)
{
    for (int i = 0 , j = str.length() - 1 ; i < j ; i++,j--)
    {
        if (str[i] != str[j]) return false;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    int mid = str.length() / 2;

    string s1 = str.substr(0 , mid);
    string s2 = str.substr(mid);

    ranges::reverse(s1);
    ranges::reverse(s2);
    str = s1 + s2;
    cout << endl << isPallind(str);
}