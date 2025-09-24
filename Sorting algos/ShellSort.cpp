#include <bits/stdc++.h>
using namespace std;

void shellSort(vector <int> &arr)
{
    int n = arr.size();
    for (int gap = n / 2 ; gap > 0 ; gap /= 2)
    {
        for (int i = gap ; i < n ; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i ; j >= gap && arr[j - gap] > temp ; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

// Time Complexity: O(n^2) in worst case, O(n log n) in best case
// Space Complexity: O(1)

int main()
{
    int n;
    cout << "\nEnter n: ";
    cin >> n;

    vector<int>arr(n);
    cout << "\nEnter arr: ";
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];

    shellSort(arr);

    cout << "\nSorted arr: ";
    for (int i : arr)
        cout << i << " ";
    // cout << "\nName:- Ashirwad Mishra\nRoll No:- 2100320100055\n";
    return 0;
}