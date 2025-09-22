#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector<int>arr(n);
    cout << "\nEnter arr: ";
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];

    int maxVal = *max_element(arr.begin() , arr.end());
    int bucketCount = maxVal / n + 1;
    vector<vector<int>>buckets(bucketCount);

    for (int i = 0 ; i < n ; i++)
        buckets[arr[i] / n].push_back(arr[i]);

    for (int i = 0 ; i < bucketCount ; i++)
        sort(buckets[i].begin() , buckets[i].end());

    int index = 0;
    for (int i = 0 ; i < bucketCount ; i++)
    {
        for (int j = 0 ; j < buckets[i].size() ; j++)
            arr[index++] = buckets[i][j];
    }

    cout << "\nSorted arr: ";
    for (int i : arr)
        cout << i << " ";
    cout << "\nName:- Ashirwad Mishra\nRoll No:- 2100320100055\n";
    return 0;
}