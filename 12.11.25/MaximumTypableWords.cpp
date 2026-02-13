#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin , str);

    string untypables;
    cin >> untypables;

    unordered_set <char> s(untypables.begin() , untypables.end());

    string currStr = "";
    int ans = 0;

    for (int i = 0 ; i < (int)str.length() ; i++)
    {
        char &c = str[i];
        if (c != ' ') currStr += c;
        else 
        {
            if (s.find(c) != s.end())
            {
                while (i < (int)str.length() && str[i] != ' ') i++;
                i++;
            }
            else ans++;
        }
    }

    cout << ans << "\n";
}