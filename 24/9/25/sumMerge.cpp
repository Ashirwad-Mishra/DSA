#include <bits/stdc++.h>
using namespace std;

vector <int> mergeArray(vector <int> &vecA , vector <int> &vecB)
{
    
    int m = vecA.size();
    int n = vecB.size();
    vector <int> vec(m + n);
    int i = 0 ;
    int j = 0;
    int k = 0;
    while( i < m && j < n)
    {
        if (vecA[i] <= vecB[j])
        {
            vec.push_back(vecA[i]);
            i++;
        }
        else
        {
            vec.push_back(vecB[j]);
            j++;
        }
    }
    while (i < m)
    {
        vec.push_back(vecA[i]);
        i++;
    }
    while(j < n)
    {
        vec.push_back(vecB[j]);
        j++;
    }
    return vec;
}

void p(vector <int> p)
{
    for (int i : p) cout << i << "  ";
    cout << endl;
}

int main()
{
    int m;
    cin >> m;
    vector<int> vecA, vecB;
    for (int i = 0 ; i < m ; i++)
    {
        int t;
        cin >> t;
        vecA.push_back(t);
    }

    for (int i = 0 ; i < m ; i++)
    {
        int t;
        cin >> t;
        vecB.push_back(t);
    }

    vector <int> merArr = mergeArray(vecA , vecB);
    p(merArr);
    cout << merArr[m-1] + merArr[m];
}