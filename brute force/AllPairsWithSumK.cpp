#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &Arr , int k)
{
    for (int i = 0 ; i < Arr.size() ; i++)
    {
        int temp = -1;
        for (int j = i + 1 ; j < Arr.size() ; j++)
        {
            if (Arr[i] + Arr[j] == k) temp = j;
        }
        if (temp != -1) cout << Arr[i] << " + " << Arr[k] << " = " << k << endl;
    }
}

int main()
{
    int n = 7;
    int m = 5;
    vector <int> vec = {8 , -1 , 3 , 4 , -3 , 2 , 1};
    solve(vec , n);
    solve(vec , m);
}