#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin , s1);
    getline(cin , s2);

    int k;
    cin >> k;

    rotate(s1.begin() , s1.begin() + k - 1 , s1.end());
    rotate(s2.begin() , s2.end() - s2.length() + k, s2.end());
    string newString = s1 + s2;
    string temp = newString;

    reverse(temp.begin() , temp.end());

    cout << endl << newString << endl << (temp == newString);
}