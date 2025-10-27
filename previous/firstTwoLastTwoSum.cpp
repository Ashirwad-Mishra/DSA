#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;
    int myArr[n];
    if (n < 4) return 0;
    cout << "\nEnter the nos: ";
    for (int i = 0 ; i < n ; i++) 
    {
        cin >> myArr[i];
    }
    cout << "\nThe answer: " << myArr[0] + myArr[1] << ", "<< myArr[n-1] + myArr[n-2];
}