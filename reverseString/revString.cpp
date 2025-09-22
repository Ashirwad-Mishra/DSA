#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter your string: ";
    string s;
    getline(cin, s);
    int n = s.length();
    int k;
    cin >> k;
    bool lastRev = true;
    string newString = "";
    for (int i = 0 ; i < n ; i += k)
    {
        if (!lastRev)
        {
            lastRev = true;
            string temp = string(s.begin() + i , s.begin() + min(i + k , n));
            reverse(temp.begin() , temp.end());
            newString += temp;
        }
        else 
        {
            newString += string(s.begin() + i , s.begin() + min(i + k , n)); lastRev = false;
        }
    }
    cout << "Reversed string is: " << newString << endl;
}