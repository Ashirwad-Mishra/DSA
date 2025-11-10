#include <bits/stdc++.h>
using namespace std;

bool WhatsInTheString(string s1 , string s2)
{
    int n = accumulate(s1.begin() , s1.end() , 0);
    int m = accumulate(s2.begin() , s2.end() , 0);
    return n == m;
}

int main()
{
    string s1;
    getline(cin , s1);
    string s2;
    getline(cin , s2);

    println("{}",WhatsInTheString(s1 , s2));
}