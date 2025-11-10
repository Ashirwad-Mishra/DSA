#include <bits/stdc++.h>
using namespace std;

string isAbb(string s1 , string s2)
{
    int m = s1.length();
    int n = s2.length();

    if (n > m || s2[0] != s1[0]) return "false";
    int j = 0;
    for (int i = 0 ; i < n ; i++)
    {
        char c = s2[i];
        int t = -1;
        for ( ; j < m ; j++)
        {
            if (s1[j] == c)
            {
                t = j;
                break;
            } 
        }
        if (t < i) return "false";
    }

    return "true";
}

int main()
{
    string s1 , s2;
    cin >> s1 >> s2;
    cout << isAbb(s1,s2);
}