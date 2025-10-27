#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i = 0;
    int j = str.length() - 1;
    while(i < j)
    {
        while (i < j && !isalpha(str[i]))
        {
            i++;
        }
        while (i < j && !isalpha(str[j]))
        {
            j--;
        }
        if (i < j)
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }
    cout << endl << str;
}