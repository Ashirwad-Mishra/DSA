#include <bits/stdc++.h>
using namespace std;

bool isJumpingNos(string num) 
{
    int n = num.length();
    if (n == 1) return true;  

    for (int i = 1; i < n; i++) 
    {
        int prev = num[i-1] - '0';
        int curr = num[i] - '0';
        if (abs(prev - curr) != 1) return false;
    }
    return true;
}

int main()
{
    int high;
    cin >> high;

    for (int i = 0 ; i <= high ; i++)
    {
        if (isJumpingNos(to_string(i))) cout << i << "  ";
    }
}