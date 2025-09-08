#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter no of students: ";
    cin >> n;

    vector<int>Arr(n);
    for (int i = 0 ; i < n ; i++)
    {
        cout << "\nEnter " << i + 1 << "th students marks: ";
        cin >> Arr[i];
    }

    sort(Arr.rbegin() , Arr.rend());
    int m = min(n , 5);
    int sum = accumulate(Arr.begin() , Arr.begin() + 5 , 0);
    cout << "\nThe sum of top 5 students: " << sum;
    cout << "\nTheir Marks: ";
    for (int i = 0 ; i < min(n , 5) ; i++)
    {
        cout << Arr[i] << " ";
    }
}