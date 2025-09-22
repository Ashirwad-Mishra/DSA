#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter your string: ";
    string s;
    getline(cin, s);
    string temp = s;
    reverse(temp.begin() , temp.end());
    cout << (temp == s);
}