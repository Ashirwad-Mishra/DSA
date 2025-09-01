#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , x;
    cout << "\nEnter the nos brought: ";
    cin >> n;
    cout << "\nEnter the rate: ";
    cin >> x;
    if (n*x >= 10000 && n*x <= 99999) cout << "\nYes!";
    else cout << "\nNope!";
}