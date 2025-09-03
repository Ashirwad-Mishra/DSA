#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the number of numbers: ";
    cin >> n;

    int eve = 0;
    int odd = 0;
    cout << "\nEnter you numbers: ";
    for (int i = 0 ; i < n ; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2) odd++;
        else eve++;
    }

    if (eve > odd) cout << "\nEven";
    else if (eve == odd) cout << "\nEqual";
    else cout << "\nOdd";
}