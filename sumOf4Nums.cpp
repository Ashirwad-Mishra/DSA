#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec(4);
    for (int i = 0 ; i < 4 ; i++)
    {
        cout << "\nEnter the " << i + 1 << "th number: ";
        cin >> vec[i];
    }
    cout << "\nThe sum of numbers: " << accumulate(vec.begin() , vec.end() , 0);
}