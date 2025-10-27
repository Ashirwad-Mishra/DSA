#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "\nEnter the string: ";
    cin >> s;
    if (count(s.begin() , s.end() , '&') && count(s.begin() , s.end() , '#') && s.length() % 2 == 0) 
    {
        cout << "\nYes!";
    }
    else cout << "\nNope!";
}