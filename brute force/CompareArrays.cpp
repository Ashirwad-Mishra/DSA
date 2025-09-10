#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &A , vector <int> &B)
{
    for (int i : B)
    {
        int cnt = 0;
        for (int j : A)
        {
            if (j > i) cnt++;
        }
        cout << i << " -> " << cnt++ << endl;
    }
}

int main()
{
    vector<int> A = {2 , 6 ,  1 , 3 , 9};
    vector<int> B = {5 , 1 , 8 , 7 , 0 , 4 , 12};
    solve( A , B);
}