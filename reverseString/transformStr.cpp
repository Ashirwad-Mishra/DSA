#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string newString = "";
    string temp = "";
    for (auto c : s)
    {
        if (isalpha(c)) 
        {
            newString += tolower(c);
        } 
        else if (isdigit(c)) newString += c;
        else temp += c;
    }
    cout << newString + temp;
}