#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr , int exp)
{
    int n = arr.size();
    vector<int>output(n);
    vector<int>count(10 , 0);

    for (int i = 0 ; i < n ; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1 ; i < 10 ; i++)
        count[i] += count[i - 1];

    for (int i = n - 1 ; i >= 0 ; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0 ; i < n ; i++)
        arr[i] = output[i];
}

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

    for (int exp = 1 ; maxVal / exp > 0 ; exp *= 10)
        countingSort(arr , exp);

    cout << "\nSorted arr: ";
    for (int i : arr)
        cout << i << " ";
    cout << "\nName:- Ashirwad Mishra\nRoll No:- 2100320100055\n";
    return 0;
}