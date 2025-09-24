#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter your string: ";
    string s;
    getline(cin, s);
    int n = s.length();
    cout << "Enter number of rotations: ";
    int k;
    cin >> k;
    // string newString = s.substr(k , n - k - 1) + s.substr(0, k); // Another way to do it
    string newString = string(s.begin() + k , s.end()) + string(s.begin() , s.begin() + k);
    cout << "Rotated string is: " << newString << endl;
}